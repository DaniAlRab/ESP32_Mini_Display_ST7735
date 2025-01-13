#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

// Pin definitions
#define TFT_SCLK 18  // SCL
#define TFT_MOSI 23  // SDA
#define TFT_RST  19  // RST
#define TFT_CS   15  // Chip Select (adjusted as requested
#define TFT_DC   2   // Data/Command (adjusted as requested)

// Initialize the display object
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // Initialize the display with 80x160 resolution
  tft.initR(INITR_MINI160x80);  // Use INITR_MINI160x80 fonoter 80x160 ST7735S displays
  tft.setRotation(3);           // Rotate the display 90 degrees (landscape mode)
  tft.fillScreen(ST7735_BLACK); // Clear the screen to black

  // Display "Hello, World!"
  tft.setTextColor(ST7735_WHITE); // Set text color to white
  tft.setTextSize(2);             // Set text size multiplier
  tft.setCursor(10, 30);          // Set the text position (x, y)
  tft.println("Hello, World!");  // Print the text
}

void loop() {
  // Nothing to do here for this example
}
