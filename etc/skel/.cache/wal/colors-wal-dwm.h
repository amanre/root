static const char norm_fg[] = "#c3c4c5";
static const char norm_bg[] = "#170d0e";
static const char norm_border[] = "#888989";

static const char sel_fg[] = "#c3c4c5";
static const char sel_bg[] = "#CD695E";
static const char sel_border[] = "#c3c4c5";

static const char urg_fg[] = "#c3c4c5";
static const char urg_bg[] = "#A15551";
static const char urg_border[] = "#A15551";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
