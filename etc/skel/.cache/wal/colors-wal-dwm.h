static const char norm_fg[] = "#c5cddd";
static const char norm_bg[] = "#0c0a0c";
static const char norm_border[] = "#898f9a";

static const char sel_fg[] = "#c5cddd";
static const char sel_bg[] = "#C55053";
static const char sel_border[] = "#c5cddd";

static const char urg_fg[] = "#c5cddd";
static const char urg_bg[] = "#625E72";
static const char urg_border[] = "#625E72";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
