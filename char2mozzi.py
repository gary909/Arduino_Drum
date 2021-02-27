 #!/usr/bin/env python
 
 
 
 import sys, array, os, textwrap, random
 
 if len(sys.argv) != 5:
         print ('Usage: char2mozzi.py <infile outfile tablename samplerate>')
         sys.exit(1)
 
 [infile, outfile, tablename, samplerate] = sys.argv[1:]
 
 def char2mozzi(infile, outfile, tablename, samplerate):
     fin = open(os.path.expanduser(infile), "rb")
     print ("opened " + infile)
     uint8_tstoread = os.path.getsize(os.path.expanduser(infile))
     
     valuesfromfile = array.array('b') # array of signed int8_t ints
     try:
         valuesfromfile.fromfile(fin, uint8_tstoread)
     finally:
         fin.close()
     
     values=valuesfromfile.tolist()
     fout = open(os.path.expanduser(outfile), "w")
     fout.write('#ifndef ' + tablename + '_H_' + '\n')
     fout.write('#define ' + tablename + '_H_' + '\n \n')
     fout.write('#if ARDUINO >= 100'+'\n')
     fout.write('#include "Arduino.h"'+'\n')
     fout.write('#else'+'\n')
     fout.write('#include "WProgram.h"'+'\n')
     fout.write('#endif'+'\n')   
     fout.write('#include "mozzi_pgmspace.h"'+'\n \n')
     fout.write('#define ' + tablename + '_NUM_CELLS '+ str(len(values))+'\n')
     fout.write('#define ' + tablename + '_SAMPLERATE '+ str(samplerate)+'\n \n')
     outstring = 'CONSTTABLE_STORAGE(int8_t) ' + tablename + '_DATA [] = {'
     try:
         for i in range(len(values)):
             
             if (values[i] == 33) and (values[i+1] == 33) and (values[i+2] == 33):
                 values[i+2] = random.choice([32, 34])
             outstring += str(values[i]) + ", "
     finally:
         outstring +=  "};"
         outstring = textwrap.fill(outstring, 80)
         fout.write(outstring)
         fout.write('\n\n#endif /* ' + tablename + '_H_ */\n')
         fout.close()
         print ("wrote " + outfile)
 
 char2mozzi(infile, outfile, tablename, samplerate)
