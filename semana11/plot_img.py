import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np
import sys

##Programa para graficar
for i in range(1,len(sys.argv)):
    file=sys.argv[i]
    plt.clf()
    data_img=np.loadtxt(file)
    plt.imshow(data_img)
    plt.colorbar()
    plt.savefig(file+'.png')
<<<<<<< HEAD


=======
>>>>>>> a7c3b37938983be9522c00be35561c0a23771bb1
