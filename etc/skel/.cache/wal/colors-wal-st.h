const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c0a0c", /* black   */
  [1] = "#625E72", /* red     */
  [2] = "#C55053", /* green   */
  [3] = "#67728C", /* yellow  */
  [4] = "#92778A", /* blue    */
  [5] = "#7987A4", /* magenta */
  [6] = "#8D95B1", /* cyan    */
  [7] = "#c5cddd", /* white   */

  /* 8 bright colors */
  [8]  = "#898f9a",  /* black   */
  [9]  = "#625E72",  /* red     */
  [10] = "#C55053", /* green   */
  [11] = "#67728C", /* yellow  */
  [12] = "#92778A", /* blue    */
  [13] = "#7987A4", /* magenta */
  [14] = "#8D95B1", /* cyan    */
  [15] = "#c5cddd", /* white   */

  /* special colors */
  [256] = "#0c0a0c", /* background */
  [257] = "#c5cddd", /* foreground */
  [258] = "#c5cddd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
