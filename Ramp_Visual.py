import numpy as np
import matplotlib.pyplot as plt

#Load Problem Parameter
param = np.genfromtxt('Parameter.txt')

#Load Data
xramp = np.genfromtxt('XRamp.txt')
yramp = np.genfromtxt('YRamp.txt')
sttcpress = np.genfromtxt('StaticPressure.txt')
stagpress = np.genfromtxt('StagnationPressure.txt')
tempout = np.genfromtxt('Temperature.txt')

#Basic Plot Command
figure, axis = plt.subplots(2,2)

#Plot All Quantities
axis[0, 0].plot(xramp,yramp, '-k', label='Ramp Geometry')
axis[0, 0].plot(param[4], param[5], 'rx', label = 'Cowl')
axis[1, 0].plot(xramp,sttcpress, '-k', label='Static Pressure')
axis[1, 1].plot(xramp,stagpress, '-k', label='Stagnation Pressure')
axis[0, 1].plot(xramp,tempout, '-k', label='Temperature')

#Ramp Plot Settings
axis[0, 0].set_xlabel('x-coordinate (m)')
axis[0, 0].set_ylabel('y-coordinate (m)')
axis[0, 0].set_title('Ramp Geometry')
axis[0, 0].set_aspect('equal')
axis[0, 0].legend()
axis[0, 0].grid()

#Static Pressure Plot Settings
axis[1, 0].set_xlabel('x-coordinate (m)')
axis[1, 0].set_ylabel('Pressure (kPa)')
axis[1, 0].set_title('Static Pressure')
#axis[1, 0].set_aspect('equal')
axis[1, 0].legend()
axis[1, 0].grid()

#Stagnation Pressure Plot Settings
axis[1, 1].set_xlabel('x-coordinate (m)')
axis[1, 1].set_ylabel('Pressure (kPa)')
axis[1, 1].set_title('Stagnation Pressure')
#axis[1, 1].set_aspect('equal')
axis[1, 1].legend()
axis[1, 1].grid()

#Static Temperature Plot Settings
axis[0, 1].set_xlabel('x-coordinate (m)')
axis[0, 1].set_ylabel('Temperature (K)')
axis[0, 1].set_title('Temperature')
#axis[0, 1].set_aspect('equal')
axis[0, 1].legend()
axis[0, 1].grid()

#Show Plot Command
plt.show()
