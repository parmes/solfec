/* https://littlevgl.com/ttf-font-to-c-array */

typedef struct
{
    uint32_t w_px         :8;
    uint32_t glyph_index  :24;
} lv_font_glyph_dsc_t;

/***********************************************************************************
 * Vera.ttf 14 px Font in U+0020 ( ) .. U+007e (~)  range with 1 bpp
***********************************************************************************/

/*Store the image of the letters (glyph)*/
static const uint8_t vera_glyph_bitmap[] = 
{
  /*Unicode: U+0020 ( ) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0021 (!) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+0022 (") , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0xa0,  //%.% 
  0xa0,  //%.% 
  0xa0,  //%.% 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0023 (#) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x12,  //...%..%. 
  0x14,  //...%.%.. 
  0x7f,  //.%%%%%%% 
  0x24,  //..%..%.. 
  0x24,  //..%..%.. 
  0xfe,  //%%%%%%%. 
  0x28,  //..%.%... 
  0x48,  //.%..%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0024 ($) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x20,  //..%.. 
  0x78,  //.%%%% 
  0xa0,  //%.%.. 
  0xa0,  //%.%.. 
  0x70,  //.%%%. 
  0x28,  //..%.% 
  0x28,  //..%.% 
  0xf0,  //%%%%. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x00,  //..... 


  /*Unicode: U+0025 (%) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x62, 0x00,  //.%%...%.. 
  0x94, 0x00,  //%..%.%... 
  0x94, 0x00,  //%..%.%... 
  0x68, 0x00,  //.%%.%.... 
  0x0b, 0x00,  //....%.%%. 
  0x14, 0x80,  //...%.%..% 
  0x14, 0x80,  //...%.%..% 
  0x23, 0x00,  //..%...%%. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0026 (&) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x30, 0x00,  //..%%..... 
  0x48, 0x00,  //.%..%.... 
  0x40, 0x00,  //.%....... 
  0x60, 0x00,  //.%%...... 
  0x91, 0x00,  //%..%...%. 
  0x8a, 0x00,  //%...%.%.. 
  0xce, 0x00,  //%%..%%%.. 
  0x7b, 0x00,  //.%%%%.%%. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0027 (') , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+0028 (() , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x40,  //.% 
  0x40,  //.% 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x00,  //.. 
  0x40,  //.% 
  0x00,  //.. 
  0x00,  //.. 


  /*Unicode: U+0029 ()) , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x80,  //%. 
  0x80,  //%. 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x00,  //.. 
  0x80,  //%. 
  0x00,  //.. 
  0x00,  //.. 


  /*Unicode: U+002a (*) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x20,  //..%.. 
  0xa8,  //%.%.% 
  0x70,  //.%%%. 
  0x70,  //.%%%. 
  0xa8,  //%.%.% 
  0x20,  //..%.. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+002b (+) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0xfe,  //%%%%%%% 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+002c (,) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+002d (-) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0xe0,  //%%% 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+002e (.) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+002f (/) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x10,  //...% 
  0x30,  //..%% 
  0x20,  //..%. 
  0x20,  //..%. 
  0x60,  //.%%. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0xc0,  //%%.. 
  0x80,  //%... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0030 (0) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0031 (1) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xe0,  //%%%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0xf8,  //%%%%% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0032 (2) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x70,  //.%%%.. 
  0x88,  //%...%. 
  0x08,  //....%. 
  0x08,  //....%. 
  0x10,  //...%.. 
  0x20,  //..%... 
  0x40,  //.%.... 
  0xf8,  //%%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0033 (3) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0x88,  //%...% 
  0x08,  //....% 
  0x70,  //.%%%. 
  0x08,  //....% 
  0x08,  //....% 
  0x98,  //%..%% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0034 (4) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x08,  //....%. 
  0x18,  //...%%. 
  0x28,  //..%.%. 
  0x48,  //.%..%. 
  0x88,  //%...%. 
  0xfc,  //%%%%%% 
  0x08,  //....%. 
  0x08,  //....%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0035 (5) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf0,  //%%%%. 
  0x80,  //%.... 
  0x80,  //%.... 
  0xf0,  //%%%%. 
  0x18,  //...%% 
  0x08,  //....% 
  0x18,  //...%% 
  0xf0,  //%%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0036 (6) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x38,  //..%%% 
  0x40,  //.%... 
  0x80,  //%.... 
  0xf0,  //%%%%. 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0037 (7) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf8,  //%%%%% 
  0x08,  //....% 
  0x10,  //...%. 
  0x10,  //...%. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x40,  //.%... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0038 (8) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0x88,  //%...% 
  0x88,  //%...% 
  0x70,  //.%%%. 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0039 (9) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x78,  //.%%%% 
  0x08,  //....% 
  0x10,  //...%. 
  0xe0,  //%%%.. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+003a (:) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+003b (;) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+003c (<) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x02,  //......% 
  0x1c,  //...%%%. 
  0xe0,  //%%%.... 
  0xe0,  //%%%.... 
  0x1c,  //...%%%. 
  0x02,  //......% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+003d (=) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xfe,  //%%%%%%% 
  0x00,  //....... 
  0xfe,  //%%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+003e (>) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x80,  //%...... 
  0x70,  //.%%%... 
  0x0e,  //....%%% 
  0x0e,  //....%%% 
  0x70,  //.%%%... 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+003f (?) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0xe0,  //%%%. 
  0x10,  //...% 
  0x30,  //..%% 
  0x60,  //.%%. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x00,  //.... 
  0x40,  //.%.. 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0040 (@) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x1e, 0x00,  //...%%%%... 
  0x61, 0x80,  //.%%....%%. 
  0x40, 0xc0,  //.%......%% 
  0x8e, 0x40,  //%...%%%..% 
  0x92, 0x40,  //%..%..%..% 
  0x92, 0xc0,  //%..%..%.%% 
  0x8f, 0x00,  //%...%%%%.. 
  0x40, 0x00,  //.%........ 
  0x61, 0x00,  //.%%....%.. 
  0x1e, 0x00,  //...%%%%... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0041 (A) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x10,  //...%... 
  0x38,  //..%%%.. 
  0x28,  //..%.%.. 
  0x28,  //..%.%.. 
  0x44,  //.%...%. 
  0x7c,  //.%%%%%. 
  0x44,  //.%...%. 
  0x82,  //%.....% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0042 (B) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xf8,  //%%%%%. 
  0x84,  //%....% 
  0x84,  //%....% 
  0xf8,  //%%%%%. 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0xf8,  //%%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0043 (C) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x38,  //..%%%. 
  0x44,  //.%...% 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x44,  //.%...% 
  0x38,  //..%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0044 (D) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xf0,  //%%%%.. 
  0x88,  //%...%. 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x88,  //%...%. 
  0xf0,  //%%%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0045 (E) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf8,  //%%%%% 
  0x80,  //%.... 
  0x80,  //%.... 
  0xf8,  //%%%%% 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0xf8,  //%%%%% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0046 (F) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf8,  //%%%%% 
  0x80,  //%.... 
  0x80,  //%.... 
  0xf8,  //%%%%% 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0047 (G) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3c,  //..%%%%. 
  0x42,  //.%....% 
  0x80,  //%...... 
  0x80,  //%...... 
  0x8e,  //%...%%% 
  0x82,  //%.....% 
  0x42,  //.%....% 
  0x3c,  //..%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0048 (H) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0xfc,  //%%%%%% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0049 (I) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+004a (J) , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x80,  //%. 
  0x00,  //.. 


  /*Unicode: U+004b (K) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x88,  //%...%.. 
  0x90,  //%..%... 
  0xa0,  //%.%.... 
  0xc0,  //%%..... 
  0xa0,  //%.%.... 
  0x90,  //%..%... 
  0x88,  //%...%.. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004c (L) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0xf8,  //%%%%% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+004d (M) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x82,  //%.....% 
  0xc6,  //%%...%% 
  0xc6,  //%%...%% 
  0xaa,  //%.%.%.% 
  0xba,  //%.%%%.% 
  0x92,  //%..%..% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004e (N) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xc4,  //%%...% 
  0xc4,  //%%...% 
  0xa4,  //%.%..% 
  0xa4,  //%.%..% 
  0x94,  //%..%.% 
  0x94,  //%..%.% 
  0x8c,  //%...%% 
  0x8c,  //%...%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+004f (O) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x38,  //..%%%.. 
  0x44,  //.%...%. 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x44,  //.%...%. 
  0x38,  //..%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0050 (P) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf0,  //%%%%. 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xf0,  //%%%%. 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0051 (Q) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x38,  //..%%%.. 
  0x44,  //.%...%. 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x44,  //.%...%. 
  0x38,  //..%%%.. 
  0x0c,  //....%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0052 (R) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xf0,  //%%%%.. 
  0x88,  //%...%. 
  0x88,  //%...%. 
  0x88,  //%...%. 
  0xf0,  //%%%%.. 
  0x90,  //%..%.. 
  0x88,  //%...%. 
  0x84,  //%....% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0053 (S) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x84,  //%....% 
  0x80,  //%..... 
  0x70,  //.%%%.. 
  0x0c,  //....%% 
  0x04,  //.....% 
  0x84,  //%....% 
  0x78,  //.%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0054 (T) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xfe,  //%%%%%%% 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0055 (U) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0xcc,  //%%..%% 
  0x78,  //.%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0056 (V) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x44,  //.%...%.. 
  0x44,  //.%...%.. 
  0x28,  //..%.%... 
  0x28,  //..%.%... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0057 (W) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x88, 0x80,  //%...%...% 
  0x88, 0x80,  //%...%...% 
  0x49, 0x00,  //.%..%..%. 
  0x55, 0x00,  //.%.%.%.%. 
  0x55, 0x00,  //.%.%.%.%. 
  0x57, 0x00,  //.%.%.%%%. 
  0x22, 0x00,  //..%...%.. 
  0x22, 0x00,  //..%...%.. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0058 (X) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x82,  //%.....% 
  0x44,  //.%...%. 
  0x28,  //..%.%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x28,  //..%.%.. 
  0x44,  //.%...%. 
  0x82,  //%.....% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0059 (Y) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x82,  //%.....% 
  0x44,  //.%...%. 
  0x28,  //..%.%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005a (Z) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xfe,  //%%%%%%% 
  0x04,  //.....%. 
  0x08,  //....%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x20,  //..%.... 
  0x40,  //.%..... 
  0xfe,  //%%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005b ([) , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0xc0,  //%% 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0xc0,  //%% 
  0x00,  //.. 


  /*Unicode: U+005c (\) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x80,  //%... 
  0xc0,  //%%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x60,  //.%%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x30,  //..%% 
  0x10,  //...% 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+005d (]) , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0xc0,  //%% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0xc0,  //%% 
  0x00,  //.. 


  /*Unicode: U+005e (^) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x38,  //..%%%.. 
  0x6c,  //.%%.%%. 
  0xc6,  //%%...%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005f (_) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 


  /*Unicode: U+0060 (`) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x20,  //..% 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0061 (a) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0x08,  //....% 
  0x78,  //.%%%% 
  0x88,  //%...% 
  0x98,  //%..%% 
  0x68,  //.%%.% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0062 (b) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0xf0,  //%%%%. 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0xf0,  //%%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0063 (c) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x70,  //.%%% 
  0xc0,  //%%.. 
  0x80,  //%... 
  0x80,  //%... 
  0xc0,  //%%.. 
  0x70,  //.%%% 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0064 (d) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x08,  //....% 
  0x08,  //....% 
  0x08,  //....% 
  0x78,  //.%%%% 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0x78,  //.%%%% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0065 (e) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0x88,  //%...% 
  0xf8,  //%%%%% 
  0x80,  //%.... 
  0xc8,  //%%..% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0066 (f) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x30,  //..%% 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0xf0,  //%%%% 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0067 (g) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x78,  //.%%%% 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0x78,  //.%%%% 
  0x08,  //....% 
  0x70,  //.%%%. 
  0x00,  //..... 


  /*Unicode: U+0068 (h) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0xb0,  //%.%%. 
  0xc8,  //%%..% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0069 (i) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+006a (j) , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0x40,  //.% 
  0x00,  //.. 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x80,  //%. 
  0x00,  //.. 


  /*Unicode: U+006b (k) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x90,  //%..%.. 
  0xa0,  //%.%... 
  0xc0,  //%%.... 
  0xa0,  //%.%... 
  0x90,  //%..%.. 
  0x88,  //%...%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+006c (l) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+006d (m) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0xb3, 0x00,  //%.%%..%%. 
  0xcc, 0x80,  //%%..%%..% 
  0x88, 0x80,  //%...%...% 
  0x88, 0x80,  //%...%...% 
  0x88, 0x80,  //%...%...% 
  0x88, 0x80,  //%...%...% 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+006e (n) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xb0,  //%.%%. 
  0xc8,  //%%..% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+006f (o) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0070 (p) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf0,  //%%%%. 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0xf0,  //%%%%. 
  0x80,  //%.... 
  0x80,  //%.... 
  0x00,  //..... 


  /*Unicode: U+0071 (q) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x78,  //.%%%% 
  0xd8,  //%%.%% 
  0x88,  //%...% 
  0x88,  //%...% 
  0xd8,  //%%.%% 
  0x78,  //.%%%% 
  0x08,  //....% 
  0x08,  //....% 
  0x00,  //..... 


  /*Unicode: U+0072 (r) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0xb0,  //%.%% 
  0xc0,  //%%.. 
  0x80,  //%... 
  0x80,  //%... 
  0x80,  //%... 
  0x80,  //%... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0073 (s) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x70,  //.%%%. 
  0x88,  //%...% 
  0xe0,  //%%%.. 
  0x18,  //...%% 
  0x88,  //%...% 
  0x70,  //.%%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0074 (t) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0xf0,  //%%%% 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x30,  //..%% 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0075 (u) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x88,  //%...% 
  0x68,  //.%%.% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0076 (v) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x48,  //.%..%.. 
  0x48,  //.%..%.. 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0077 (w) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x49, 0x00,  //.%..%..%. 
  0x49, 0x00,  //.%..%..%. 
  0x55, 0x00,  //.%.%.%.%. 
  0x77, 0x00,  //.%%%.%%%. 
  0x22, 0x00,  //..%...%.. 
  0x22, 0x00,  //..%...%.. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0078 (x) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x84,  //%....% 
  0x48,  //.%..%. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x48,  //.%..%. 
  0x84,  //%....% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0079 (y) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x48,  //.%..%.. 
  0x48,  //.%..%.. 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x20,  //..%.... 
  0xc0,  //%%..... 
  0x00,  //....... 


  /*Unicode: U+007a (z) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xf8,  //%%%%% 
  0x08,  //....% 
  0x10,  //...%. 
  0x20,  //..%.. 
  0x40,  //.%... 
  0xf8,  //%%%%% 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+007b ({) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x18,  //...%% 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0xc0,  //%%... 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x18,  //...%% 
  0x00,  //..... 


  /*Unicode: U+007c (|) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 


  /*Unicode: U+007d (}) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0xc0,  //%%... 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x18,  //...%% 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0xc0,  //%%... 
  0x00,  //..... 


  /*Unicode: U+007e (~) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x72,  //.%%%..% 
  0x9c,  //%..%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


};


/*Store the glyph descriptions*/
static const lv_font_glyph_dsc_t vera_glyph_dsc[] = 
{
  {.w_px = 4,	.glyph_index = 0},	/*Unicode: U+0020 ( )*/
  {.w_px = 1,	.glyph_index = 14},	/*Unicode: U+0021 (!)*/
  {.w_px = 3,	.glyph_index = 28},	/*Unicode: U+0022 (")*/
  {.w_px = 8,	.glyph_index = 42},	/*Unicode: U+0023 (#)*/
  {.w_px = 5,	.glyph_index = 56},	/*Unicode: U+0024 ($)*/
  {.w_px = 9,	.glyph_index = 70},	/*Unicode: U+0025 (%)*/
  {.w_px = 9,	.glyph_index = 98},	/*Unicode: U+0026 (&)*/
  {.w_px = 1,	.glyph_index = 126},	/*Unicode: U+0027 (')*/
  {.w_px = 2,	.glyph_index = 140},	/*Unicode: U+0028 (()*/
  {.w_px = 2,	.glyph_index = 154},	/*Unicode: U+0029 ())*/
  {.w_px = 5,	.glyph_index = 168},	/*Unicode: U+002a (*)*/
  {.w_px = 7,	.glyph_index = 182},	/*Unicode: U+002b (+)*/
  {.w_px = 1,	.glyph_index = 196},	/*Unicode: U+002c (,)*/
  {.w_px = 3,	.glyph_index = 210},	/*Unicode: U+002d (-)*/
  {.w_px = 1,	.glyph_index = 224},	/*Unicode: U+002e (.)*/
  {.w_px = 4,	.glyph_index = 238},	/*Unicode: U+002f (/)*/
  {.w_px = 5,	.glyph_index = 252},	/*Unicode: U+0030 (0)*/
  {.w_px = 5,	.glyph_index = 266},	/*Unicode: U+0031 (1)*/
  {.w_px = 6,	.glyph_index = 280},	/*Unicode: U+0032 (2)*/
  {.w_px = 5,	.glyph_index = 294},	/*Unicode: U+0033 (3)*/
  {.w_px = 6,	.glyph_index = 308},	/*Unicode: U+0034 (4)*/
  {.w_px = 5,	.glyph_index = 322},	/*Unicode: U+0035 (5)*/
  {.w_px = 5,	.glyph_index = 336},	/*Unicode: U+0036 (6)*/
  {.w_px = 5,	.glyph_index = 350},	/*Unicode: U+0037 (7)*/
  {.w_px = 5,	.glyph_index = 364},	/*Unicode: U+0038 (8)*/
  {.w_px = 5,	.glyph_index = 378},	/*Unicode: U+0039 (9)*/
  {.w_px = 1,	.glyph_index = 392},	/*Unicode: U+003a (:)*/
  {.w_px = 1,	.glyph_index = 406},	/*Unicode: U+003b (;)*/
  {.w_px = 7,	.glyph_index = 420},	/*Unicode: U+003c (<)*/
  {.w_px = 7,	.glyph_index = 434},	/*Unicode: U+003d (=)*/
  {.w_px = 7,	.glyph_index = 448},	/*Unicode: U+003e (>)*/
  {.w_px = 4,	.glyph_index = 462},	/*Unicode: U+003f (?)*/
  {.w_px = 10,	.glyph_index = 476},	/*Unicode: U+0040 (@)*/
  {.w_px = 7,	.glyph_index = 504},	/*Unicode: U+0041 (A)*/
  {.w_px = 6,	.glyph_index = 518},	/*Unicode: U+0042 (B)*/
  {.w_px = 6,	.glyph_index = 532},	/*Unicode: U+0043 (C)*/
  {.w_px = 6,	.glyph_index = 546},	/*Unicode: U+0044 (D)*/
  {.w_px = 5,	.glyph_index = 560},	/*Unicode: U+0045 (E)*/
  {.w_px = 5,	.glyph_index = 574},	/*Unicode: U+0046 (F)*/
  {.w_px = 7,	.glyph_index = 588},	/*Unicode: U+0047 (G)*/
  {.w_px = 6,	.glyph_index = 602},	/*Unicode: U+0048 (H)*/
  {.w_px = 1,	.glyph_index = 616},	/*Unicode: U+0049 (I)*/
  {.w_px = 2,	.glyph_index = 630},	/*Unicode: U+004a (J)*/
  {.w_px = 7,	.glyph_index = 644},	/*Unicode: U+004b (K)*/
  {.w_px = 5,	.glyph_index = 658},	/*Unicode: U+004c (L)*/
  {.w_px = 7,	.glyph_index = 672},	/*Unicode: U+004d (M)*/
  {.w_px = 6,	.glyph_index = 686},	/*Unicode: U+004e (N)*/
  {.w_px = 7,	.glyph_index = 700},	/*Unicode: U+004f (O)*/
  {.w_px = 5,	.glyph_index = 714},	/*Unicode: U+0050 (P)*/
  {.w_px = 7,	.glyph_index = 728},	/*Unicode: U+0051 (Q)*/
  {.w_px = 6,	.glyph_index = 742},	/*Unicode: U+0052 (R)*/
  {.w_px = 6,	.glyph_index = 756},	/*Unicode: U+0053 (S)*/
  {.w_px = 7,	.glyph_index = 770},	/*Unicode: U+0054 (T)*/
  {.w_px = 6,	.glyph_index = 784},	/*Unicode: U+0055 (U)*/
  {.w_px = 8,	.glyph_index = 798},	/*Unicode: U+0056 (V)*/
  {.w_px = 9,	.glyph_index = 812},	/*Unicode: U+0057 (W)*/
  {.w_px = 7,	.glyph_index = 840},	/*Unicode: U+0058 (X)*/
  {.w_px = 7,	.glyph_index = 854},	/*Unicode: U+0059 (Y)*/
  {.w_px = 7,	.glyph_index = 868},	/*Unicode: U+005a (Z)*/
  {.w_px = 2,	.glyph_index = 882},	/*Unicode: U+005b ([)*/
  {.w_px = 4,	.glyph_index = 896},	/*Unicode: U+005c (\)*/
  {.w_px = 2,	.glyph_index = 910},	/*Unicode: U+005d (])*/
  {.w_px = 7,	.glyph_index = 924},	/*Unicode: U+005e (^)*/
  {.w_px = 6,	.glyph_index = 938},	/*Unicode: U+005f (_)*/
  {.w_px = 3,	.glyph_index = 952},	/*Unicode: U+0060 (`)*/
  {.w_px = 5,	.glyph_index = 966},	/*Unicode: U+0061 (a)*/
  {.w_px = 5,	.glyph_index = 980},	/*Unicode: U+0062 (b)*/
  {.w_px = 4,	.glyph_index = 994},	/*Unicode: U+0063 (c)*/
  {.w_px = 5,	.glyph_index = 1008},	/*Unicode: U+0064 (d)*/
  {.w_px = 5,	.glyph_index = 1022},	/*Unicode: U+0065 (e)*/
  {.w_px = 4,	.glyph_index = 1036},	/*Unicode: U+0066 (f)*/
  {.w_px = 5,	.glyph_index = 1050},	/*Unicode: U+0067 (g)*/
  {.w_px = 5,	.glyph_index = 1064},	/*Unicode: U+0068 (h)*/
  {.w_px = 1,	.glyph_index = 1078},	/*Unicode: U+0069 (i)*/
  {.w_px = 2,	.glyph_index = 1092},	/*Unicode: U+006a (j)*/
  {.w_px = 6,	.glyph_index = 1106},	/*Unicode: U+006b (k)*/
  {.w_px = 1,	.glyph_index = 1120},	/*Unicode: U+006c (l)*/
  {.w_px = 9,	.glyph_index = 1134},	/*Unicode: U+006d (m)*/
  {.w_px = 5,	.glyph_index = 1162},	/*Unicode: U+006e (n)*/
  {.w_px = 5,	.glyph_index = 1176},	/*Unicode: U+006f (o)*/
  {.w_px = 5,	.glyph_index = 1190},	/*Unicode: U+0070 (p)*/
  {.w_px = 5,	.glyph_index = 1204},	/*Unicode: U+0071 (q)*/
  {.w_px = 4,	.glyph_index = 1218},	/*Unicode: U+0072 (r)*/
  {.w_px = 5,	.glyph_index = 1232},	/*Unicode: U+0073 (s)*/
  {.w_px = 4,	.glyph_index = 1246},	/*Unicode: U+0074 (t)*/
  {.w_px = 5,	.glyph_index = 1260},	/*Unicode: U+0075 (u)*/
  {.w_px = 7,	.glyph_index = 1274},	/*Unicode: U+0076 (v)*/
  {.w_px = 9,	.glyph_index = 1288},	/*Unicode: U+0077 (w)*/
  {.w_px = 6,	.glyph_index = 1316},	/*Unicode: U+0078 (x)*/
  {.w_px = 7,	.glyph_index = 1330},	/*Unicode: U+0079 (y)*/
  {.w_px = 5,	.glyph_index = 1344},	/*Unicode: U+007a (z)*/
  {.w_px = 5,	.glyph_index = 1358},	/*Unicode: U+007b ({)*/
  {.w_px = 1,	.glyph_index = 1372},	/*Unicode: U+007c (|)*/
  {.w_px = 5,	.glyph_index = 1386},	/*Unicode: U+007d (})*/
  {.w_px = 7,	.glyph_index = 1400},	/*Unicode: U+007e (~)*/
};

static const int vera_unicode_first = 32;	/*First Unicode letter in this font*/
static const int vera_unicode_last = 126;	/*Last Unicode letter in this font*/
static const int vera_h_px = 14;	        /*Font height in pixels*/
static const int vera_glyph_cnt = 95;	        /*Number of glyphs in the font*/