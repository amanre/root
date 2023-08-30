const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#170d0e", /* black   */
  [1] = "#A15551", /* red     */
  [2] = "#CD695E", /* green   */
  [3] = "#BE847B", /* yellow  */
  [4] = "#6C7C83", /* blue    */
  [5] = "#77888E", /* magenta */
  [6] = "#77BFD2", /* cyan    */
  [7] = "#c3c4c5", /* white   */

  /* 8 bright colors */
  [8]  = "#888989",  /* black   */
  [9]  = "#A15551",  /* red     */
  [10] = "#CD695E", /* green   */
  [11] = "#BE847B", /* yellow  */
  [12] = "#6C7C83", /* blue    */
  [13] = "#77888E", /* magenta */
  [14] = "#77BFD2", /* cyan    */
  [15] = "#c3c4c5", /* white   */

  /* special colors */
  [256] = "#170d0e", /* background */
  [257] = "#c3c4c5", /* foreground */
  [258] = "#c3c4c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
