# TFT Display "Hello, World!" Example with ST7735

## Project Overview
This project demonstrates how to initialize and display text on an **Adafruit ST7735 TFT LCD screen** using an ESP32. The program initializes an 80x160 TFT display, rotates it to landscape mode, and displays the message "Hello, World!" on the screen.

---

## Key Features
- **TFT Display Initialization:**
  - Configures the ST7735 display with 80x160 resolution.
  - Rotates the screen to landscape orientation.

- **Text Rendering:**
  - Displays "Hello, World!" in white text on a black background.
  - Customizes text position, size, and color.

---

## Hardware Requirements
- **ESP32 Development Board**
- **Adafruit ST7735 TFT Display**
  - Resolution: 80x160 pixels
  - Communication: SPI
- **Connections:**
  - SCLK (Clock): GPIO 18
  - MOSI (Data): GPIO 23
  - RST (Reset): GPIO 19
  - CS (Chip Select): GPIO 15
  - DC (Data/Command): GPIO 2

---

## Workflow
1. **Display Initialization:**
   - Initializes the ST7735 display using the Adafruit GFX and ST7735 libraries.
   - Configures the display resolution and sets it to landscape mode.

2. **Text Display:**
   - Clears the screen to black.
   - Displays the "Hello, World!" message in white text with a size multiplier of 2.

---

## Configuration
- **Pin Definitions:**
  Adjust the pin definitions in the code as needed to match your hardware setup:
  ```cpp
  #define TFT_SCLK 18  // Clock
  #define TFT_MOSI 23  // Data
  #define TFT_RST  19  // Reset
  #define TFT_CS   15  // Chip Select
  #define TFT_DC   2   // Data/Command
  ```

- **Display Orientation:**
  To change the display orientation, modify the `setRotation()` parameter:
  - `0`: Portrait
  - `1`: Landscape (inverted)
  - `2`: Portrait (inverted)
  - `3`: Landscape

- **Text Properties:**
  Customize text size, color, and position using:
  - `setTextColor(color)`
  - `setTextSize(size_multiplier)`
  - `setCursor(x, y)`

---

## Requirements
- **Arduino IDE or PlatformIO**
- Libraries:
  - `Adafruit_GFX`
  - `Adafruit_ST7735`
- Properly connected and powered ST7735 TFT display.

---

## Usage
1. Connect the TFT display to the ESP32 according to the pin definitions.
2. Upload the code to the ESP32 using Arduino IDE or PlatformIO.
3. Observe the "Hello, World!" message displayed on the screen.

---

## Example Output
- **Screen Display:**
  - "Hello, World!" appears centered in white text on a black background.
- **Serial Monitor:**
  - No serial output is provided in this example.

---

## Notes
- Ensure the SPI connections (SCLK, MOSI) are properly wired between the ESP32 and the ST7735.
- The Adafruit GFX library provides additional functions for drawing shapes, images, and more.
- If using a different screen resolution, update the initialization call accordingly:
  ```cpp
  tft.initR(INITR_MINI160x80); // Adjust for your specific display model
  ```
