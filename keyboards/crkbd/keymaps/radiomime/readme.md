## docs

-   [using process_record_user](https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#programming-the-behavior-of-any-keycode-idprogramming-the-behavior-of-any-keycode)
-   [combos docs](https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md#combos)
-   [better one shots](https://github.com/daliusd/qmk_firmware/blob/daliusd-redox/keyboards/ferris/keymaps/daliusd/oneshot.c)

## possibilities

-   Space could be a mod-tap key with the hold action swapping to a numpad layer.
    This could be used for gaming, too.
    ```c
    #define MT_SPC    MT(<layer>,KC_SPC)
    ```
-   change leds with different layers? https://github.com/qmk/qmk_firmware/issues/2862
-   more key combos for things? I've seen ab, jk, qw, fj, and sd used for things like shift, tab, and a layer
-   [should space be a one shot layer?](https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md#switching-and-toggling-layers)
