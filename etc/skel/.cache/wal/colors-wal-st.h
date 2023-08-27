const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0332", /* black   */
  [1] = "#980065", /* red     */
  [2] = "#B10068", /* green   */
  [3] = "#C5006A", /* yellow  */
  [4] = "#0E3887", /* blue    */
  [5] = "#0D4898", /* magenta */
  [6] = "#0B5CAB", /* cyan    */
  [7] = "#a6a1c8", /* white   */

  /* 8 bright colors */
  [8]  = "#74708c",  /* black   */
  [9]  = "#980065",  /* red     */
  [10] = "#B10068", /* green   */
  [11] = "#C5006A", /* yellow  */
  [12] = "#0E3887", /* blue    */
  [13] = "#0D4898", /* magenta */
  [14] = "#0B5CAB", /* cyan    */
  [15] = "#a6a1c8", /* white   */

  /* special colors */
  [256] = "#0b0332", /* background */
  [257] = "#a6a1c8", /* foreground */
  [258] = "#a6a1c8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
