

# DarkDuino

DarkDuino is a modified dark theme for the legacy version of aduino IDE 1.8.x, based on [tauno-dark-0.2](https://github.com/taunoe/arduino-dark-theme/tree/master).


# Changes
The changes made from the base version (tauno-dark-0.2) was inspired from the color theme [Bearded Theme feat. Will](https://github.com/BeardedBear/bearded-theme)

 - Updated the overall color scheme to match the Bearded Theme's darker background and vibrant syntax highlighting
 - Enabled line highlighting for better readability
 - Adjusted comment styles to be italic for better distinction
 - Enhanced contrast for keywords, functions, and literals
 - GUI was not touched

For specific changes, please check [changes.md](https://github.com/EmanDev/DarkDuino/blob/main/changes.md).

## Installation

Download the latest release. Copy the zip file to `C:\users\%usersprofile%\Documents\Arduino\theme\`. Launch Arduino IDE 1.8x then `Preferences > Theme ` then select `DarkDuino 1.0`. Restart to take effect.

## Verify theme

To check the theme (syntax and color schemes), restart arduino ide and use a sample code to confirm if the color schemes apply. You can use the sample code by download or copying the contents from the `SampleCode.ino` from the folder `SampleCode`.

## Customization

To customize this theme to your liking, edit the `theme.txt` file and change the colors. Check the comments and understand the syntax to edit it.

## Reason

We all know of the newer Arduino IDE version (2.x.x). However, based on my experience, this update has been slow and fails to connect properly to arduino boards. Until it matches the functionality of the legacy version, as it works quite well for me, I will continue using it. Furthermore, typical dark themes online for arduino often have basic syntax highlighting, prompting me to customize and enhance the color scheme to my liking. Thus, **DarkDuino** was born.

## License

MIT License. Check the License file for more.
