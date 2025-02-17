# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes

# Enables the use of OLED displays
OLED_ENABLE = yes
OLED_DRIVER = SSD1306

# Enables the use of one or more encoders
ENCODER_ENABLE = yes

# Enable Link Time Optimization
LTO_ENABLE = yes			# Enable help with smaller firmware size

DEFAULT_FOLDER = clickety_split/leeloo/rev2
