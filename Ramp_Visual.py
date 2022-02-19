import numpy as np
import matplotlib.pyplot as plt

#Load Problem Parameter
param = np.genfromtxt('Parameter.txt')

#Load Ramp Coordinates
xramp = np.genfromtxt('XRamp.txt')
yramp = np.genfromtxt('YRamp.txt')

#Plot Result
figure, axis = plt.subplots()

#Plot Ramp Geometry and Cowl
axis.plot(xramp,yramp, '-k', label='Ramp Geometry')
axis.plot(param[4], param[5], 'rx', label = 'Cowl')

#Plot Settings
axis.set_xlabel('x-coordinate (m)')
axis.set_ylabel('y-coordinate (m)')
axis.set_title('Ramp Geometry')
axis.set_aspect('equal')
axis.legend()
axis.grid()

#Show Plot Command
plt.show()
