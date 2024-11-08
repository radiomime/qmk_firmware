RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes

# this helps me flash via command line
BOOTLOADER = atmel-dfu

# allow combos
COMBO_ENABLE = yes

# add sources
SRC += oneshot.c
SRC += swapper.c

# -----------------------------------------------------------------------------------------
# Everything below here was my initial config, but I don't think most things are needed
# -----------------------------------------------------------------------------------------
# # MCU name
# MCU = atmega32u4
#
# # Bootloader selection
# #   Teensy       halfkay
# #   Pro Micro    caterina
# #   Atmel DFU    atmel-dfu
# #   LUFA DFU     lufa-dfu
# #   QMK DFU      qmk-dfu
# #   ATmega32A    bootloadHID
# #   ATmega328P   USBasp
# BOOTLOADER = qmk-dfu
#
# # Build Options
# #   change to "no" to disable the options, or define them in the Makefile in
# #   the appropriate keymap folder that will get included automatically
# #
# BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
# MOUSEKEY_ENABLE = yes       # Mouse keys
# EXTRAKEY_ENABLE = yes       # Audio control and System control
# CONSOLE_ENABLE = no         # Console for debug
# COMMAND_ENABLE = no        # Commands for debug and configuration
# NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
# MIDI_ENABLE = no            # MIDI controls
# AUDIO_ENABLE = no           # Audio output on port C6
# UNICODE_ENABLE = no         # Unicode
# BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
# RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
# RGB_MATRIX_ENABLE = no
# RGB_MATRIX_DRIVER = WS2812
#
# # Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend
#
# # if firmware size over limit, try this option
# LTO_ENABLE = yes
# LAYOUTS = split_3x5_3 split_3x6_3
#
# DEFAULT_FOLDER = crkbd/rev1
#
# # allow combos
# COMBO_ENABLE = yes
#
#
# # add sources
# SRC += oneshot.c
# SRC += swapper.c
#
# # oled
# OLED_ENABLE     = yes
# OLED_DRIVER     = ssd1306
# # OLED_DRIVER_ENABLE  = yes
# # OLED_DRIVER = SSD1306 # Selects the right driver
# # OLED_ENABLE = yes     # Enables the use of OLED displays
#
# # SRC += callum.c
# # SRC += oneshot.c
# # SRC += swapper.c
# # SRC += callum.c
# # SRC += oneshot.c
# # SRC += swapper.c
