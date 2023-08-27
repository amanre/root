static const char norm_fg[] = "#a6a1c8";
static const char norm_bg[] = "#0b0332";
static const char norm_border[] = "#74708c";

static const char sel_fg[] = "#a6a1c8";
static const char sel_bg[] = "#B10068";
static const char sel_border[] = "#a6a1c8";

static const char urg_fg[] = "#a6a1c8";
static const char urg_bg[] = "#980065";
static const char urg_border[] = "#980065";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
