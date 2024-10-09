from gamspy import *
import os
sets = "DE, GDATA"
os.system('gams ./Balmorel_ReadData.gms --params="{}" s=s1 > output_file_start.txt'.format(sets))
for i in range(100,101):
    print("Running with {} demand".format(i))
    gdx = Container(load_from="C:/Users/taigr/Desktop/Balmorel/Balmorel/base/model/base_input_data.gdx")
    de = gdx["DE"].records
    gdx["DE"].records["value"].where(de["RRR"]!="DK1", de["value"]*i/100, inplace=True)
    gdx.write("C:/Users/taigr/Desktop/Balmorel/Balmorel/base/model/base_input_data2.gdx")
    os.system("gams ./Balmorel_finish.gms r=s1 > output_file_{}.txt".format(i))