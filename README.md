# Sifu-Modding-Template

This project has been made by me (KangieDanie). The c++ header classes were generated with the [UE4SS](https://github.com/UE4SS) tool (by CheatingMuppet and Archengius).

To use the project, click "use this as a template", clone or fork the repository and follow these steps:

Double click Sifu.uproject to build the project - NOTE that it will take a while on the first time since it has to build all the modules. If the build fails, you must do the following:
- You must have Visual Studio installed (it has to be **VS2019**), then you should be able to right click the Sifu.uproject and select "Generate Visual Studio Project Files".
- Then you can copy all of your files from your old Sifu projects (if you have any) to the Content folder.
- When you go to package your project for the first time, it will rebuild all the modules again, so it will take another while. From then on it should all be normal speed.
- If you want to generate a .sln file (or regenerate if one already exists), from inside Unreal Engine, navigate to File -> Create Visual Studio Project e.g. File -> Create Visual Studio Solution. It will then create a new solution file in the same directory as your project.

If your project building gets the errors along the lines of:

> Error: Visual Studio 2019 is installed, but is missing the C++ toolchain.

Then you need to open the Visual Studio Installer app, click 'Modify' on your Visual Studio installation, and select the 'Desktop development with C++' and '.NET desktop development' (you will need this later) options.

If your project building is getting errors along the lines of:

> c1xx: fatal error C1076: compiler limit: internal heap limit reached
> 
> c1xx: error C3859: Failed to create virtual memory for PCH

Then you need to just build it again. Same with first time packaging - package it again.

### Credits: 
- _Dmgvol_ and _Longerwarrior_ for guiding me into this new world of modding
- _Buckminsterfullerene_ for the text (I copied because yours was so easy to understand)
