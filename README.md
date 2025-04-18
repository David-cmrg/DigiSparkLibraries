# DigiSparkLibraries
###### *Not accessible on the Library Manager of the ArduinoIDE. Installation must be done manual!*



This repository contains fully functional DigiSpark libraries. These libraries can be easily downloaded and integrated into your projects with clear instructions provided.

## Features

- Download and use DigiSpark libraries directly.
- Additional download instructions for setup.
- (Current) Support for DigiSpark USB, Keyboard, Mouse, and Joystick functionalities.

## Current Libraries Included

- **DigisparkJoystick**
- **DigisparkKeyboard**
- **DigisparkMouse**
- **DigisparkUSB**
- **DigisparkOLED** 
###### *DigisparkOLED: Not available in Pre Release V1.0*
- **DigisparkRGB** 
###### *DigisparkRGB: Not available in Pre Release V1.0*

*Planning on adding all other Libraries in near future*

## Installation

1. Enter the folder of the Library you want / need.
2. Download the Digispark[LIBRARY].zip file.
3. Open your Editor *(Example: Arduino IDE)*
4. Include the Library into your "Sketch" (Project): Sektch > Include Library > Add .zip Library > select the .zip you just downloaded
5. Wait for installation process to finish
6. Happy Coding!

##
This repository is open-source and free to use. Contributions are welcome.
For more details, check out the repository: [DigiSparkLibraries on GitHub](https://github.com/David-cmrg/DigiSparkLibraries)
###### *For advanced details, regarding Licenses, original Author, etc, check [DigiStumpArduino on GitHub](https://github.com/digistump/DigistumpArduino/)*

---

# DigiSpark Libraries Installation Guide
#### USING THE RELEASE´s .ZIP FILE

## Overview

This repository contains libraries and instructions for integrating them into your projects. In the parent folder, you’ll find two subfolders: `zipped` and `unzipped`. Both offer valid installation methods, but the **"Zipped Method"** is recommended for its simplicity and feedback on success. This guide provides detailed steps for both approaches, with a focus on the Arduino IDE. If you’re using a different editor, the process may vary slightly.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation Methods](#installation-methods)
  - [Zipped Method (Recommended)](#zipped-method-recommended)
  - [Unzipped Method](#unzipped-method)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [Contact](#contact)

## Prerequisites

- **Arduino IDE** (or your preferred editor; names of options may differ).
- A project where you want to include the DigiSpark libraries.
- Basic familiarity with your editor’s interface.

## Installation Methods


First of all we will need to unzip the Release.zip you just downloaded from my GitHub Repository!
This is universal for all instalation methods.


### Zipped Method (Recommended)

1. Navigate to the `zipped` subfolder in this repository.
2. Locate the `.zip` file of the library you want to include in your project.
3. In the Arduino IDE:
   - Find the **"Include Library"** option (typically under `Sketch > Include Library`).
     - **Note**: Do not confuse this with **"Library Manager"**, which is a different feature.
   - Click **"Add .ZIP Library"** from the dropdown menu.
4. A file explorer window will open. Select the `.zip` library you want to include from the `zipped` folder.
5. The IDE will extract and install the library. Check the **Output Console** (or the bottom-right corner of the Arduino IDE) for a success message.
6. If not added automatically, include the library in your code by adding the following line at the top: `#include "Digi[LIBRARY].h"`
   Replace `[LIBRARY]` with the specific library name (e.g., `DigiKeyboard`).
7. Your project is now ready to use the library!

**Note**: The fully functional libraries might be now found under the "Library Manager" Tab. Refer to the [Repository README](https://github.com/David-cmrg/DigiSparkLibraries/blob/main/README.md) for the latest information!

### Unzipped Method

1. Navigate to the `unzipped` subfolder in this your extraced zip file *(The extracted Release you just downloaded)*.
2. Locate the library folder you want to include and copy it.
3. Find your Arduino IDE’s library directory:
   - On Windows, this is typically at: `C:\Users\[YourUsername]\Documents\Arduino\libraries`.
   - On other systems, locate the `Arduino` folder in your Documents directory.
4. Paste the copied library folder into the `libraries` subfolder.
5. Restart the Arduino IDE to ensure it recognizes the new library.
6. Add the following line to the top of your code:
   `# include "Digi[LIBRARY].h"`
   Replace `[LIBRARY]` with the specific library name.
7. Your project should now be set up to use the library.

**Note**: This method does not provide confirmation of successful installation, unlike the zipped method.

## Troubleshooting

- **Zipped Method**: If no success message appears, ensure you selected the correct `.zip` file and that it’s not corrupted.
- **Unzipped Method**: If the library isn’t recognized, verify the folder is in the correct `libraries` directory and restart the IDE.
- **Still having issues?** File an [Issue Ticket](https://github.com/David-cmrg/DigiSparkLibraries/issues) or email me at [david.cmrg@proton.me](mailto:david.cmrg@proton.me).

## Contributing

Contributions are welcome! Feel free to submit a pull request or suggest improvements via the [Issues page](https://github.com/David-cmrg/DigiSparkLibraries/issues).

## Contact

For questions or support, reach out to me:
- **Email**: [david.cmrg@proton.me](mailto:david.cmrg@proton.me)
- **GitHub**: [David-cmrg](https://github.com/David-cmrg)

I hope these libraries and instructions enhance your projects! Best regards.
