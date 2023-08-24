# GPIO_01
Demonstration of GPIO Programming without using LPC17xx Header file

The ARM Cortex-M3 LPC1768 is a popular microcontroller from NXP (formerly Philips) that is widely used in embedded systems. It provides a range of GPIO pins for various input and output tasks. Here's an overview of GPIO pins on the LPC1768 microcontroller:

Numbering and Naming: The LPC1768 has a total of 40 GPIO pins, numbered from P0.0 to P4.29. These are grouped into five ports: P0, P1, P2, P3, and P4.

Configuration: Each GPIO pin can be configured as an input or output using the direction control registers.

Data Register: To set the logic level of an output pin, you write to the corresponding bit in the data register. To read the status of an input pin, you read from the data register.

Direction Register: The direction register (IODIR) determines whether a pin is an input or an output. Writing a '0' to a bit in this register configures the corresponding pin as an output, while writing a '1' configures it as an input.

Bit Manipulation: Bitwise operations are commonly used to manipulate individual pins within a port.

Interrupts: The LPC1768 allows you to configure GPIO pins to generate interrupts on specific events, such as a rising or falling edge, using the Interrupt Sense Control registers (ISER).

Multiplexing: GPIO pins on the LPC1768 can have multiple functions, including GPIO, UART, SPI, I2C, and more. You configure the pin functions using the Pin Function Select registers (PINSEL).

Voltage Levels: The LPC1768 operates at a voltage level of 3.3V. When interfacing with external devices, ensure that voltage levels are compatible.

Protection: The LPC1768 GPIO pins offer some level of protection against overcurrent and overvoltage, but additional external protection might be necessary depending on the application.

For detailed information on GPIO pin configuration, electrical characteristics, and programming examples, you should refer to the LPC1768 datasheet and user manual provided by NXP. These documents provide a comprehensive guide to using GPIO pins and other features of the microcontroller. Keep in mind that GPIO usage and configuration specifics can also depend on the development environment or tools you are using.

we are using the resiaterws manually to manipulate the values

GPIO Port Registers:

IOxPIN: This register reads the state of the pins in a GPIO port. Each bit corresponds to a specific pin.
IOxSET: Writing a '1' to a bit in this register sets the corresponding pin to a high logic level.
IOxCLR: Writing a '1' to a bit in this register clears the corresponding pin, setting it to a low logic level.
IOxDIR: This register controls the direction of the pins in the GPIO port. Each bit corresponds to a specific pin, and writing a '1' configures the pin as an input, while writing a '0' configures it as an output.

