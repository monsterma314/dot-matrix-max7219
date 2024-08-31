## MAX7219 Dot Display Driver

## PlatformIO Setup

Documentation (really good imo): https://docs.platformio.org/en/latest/core/index.html

#### Step 1: Installation
1. Install using the instruction provided here: https://docs.platformio.org/en/latest/core/installation/index.html

>⚠️ If using Linux make sure to update the udev rules for the USB serial port permissions!

Follow any other guidance on this page.

#### Step 1b: Environment Setup
`source setup.bash` will add the PIO installation directory to `PATH` and set the `workspace` variable. `workspace` is optional. Updating PATH is not so `pio` can be ran successfully.

#### Step 2. Setting up a brand new project:
https://docs.platformio.org/en/latest/core/quickstart.html

- Go to VSCode PlatformIO IDE extension
    - Hit the alien on the far-left panel (below `file explorer`)
    - Hit the `new project` button
    - Navigate to the directory (in the UI) that where you want the project to sit
    - Name the project
    - State what board you are using
    - Specify CMSIS (or whatever software you are most comfortable with)
 
#### STEP 3: Coding
Create whatever files you need in the `src` directory. For C/C++ coding, all header files (e.g. `#include "led.h"`) will need to go in the `include` directory.

#### STEP 3: Compile and Upload
Hit the alien icon on the left under `PROJECT_TASK > General` there are many options including:
    
- Build
- Upload
- Monitor
- Upload and Monitor
- Clean
- Full Clean
- Devices

Choose `Build`. Correct any errors or warnings in the code as you see fit.

Next, upload to target by: `Upload`

#### STEP 4: Debugging 

The default settings for what directories to include are baked-in quite well to PlatformIO ahead of time. 

Just follow this guide for intuitive VS-Code debugging: https://dev.blues.io/blog/debugging-stm32-esp32-vscode-platformio/

🔥🔥🔥

## MAX7219 Theory of Operation
testing


## ...