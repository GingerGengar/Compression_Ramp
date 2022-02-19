import numpy as np
import matplotlib.pyplot as plt

xramp = np.genfromtxt('XRamp.txt')
yramp = np.genfromtxt('YRamp.txt')

plt.plot(xramp,yramp)
plt.show()
