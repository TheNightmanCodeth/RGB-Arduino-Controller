//   
//   * This file is a part of RGB-Arduino-Controller
//   * RGB.ino created by Joe Diragi on 06/19/2019
//   * Copyright © 2019 TheNightmanCodeth . All rights reserved.
//   
//   RGB is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//   
//   RGB is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//   
//   You should have received a copy of the GNU General Public License
//   along with RGB.  If not, see <https://www.gnu.org/licenses/>.
//   

// 30 LEDs per strip, two strips, 60 LEDs(:
#define NUM_LEDS    60

// The pins each channel is connected to
#define RED_PIN     5
#define BLU_PIN     3
#define GRN_PIN     6

#define DELAY       20      // I don't honestly know what this is (TODO)
#define HUE_MAX     6.0     // The max value for hue (Not sure of official values)
#define HUE_DELTA   0.01    // How much to modify the hue val in main loop

void setup() {
  
}

void loop() {
  
}
