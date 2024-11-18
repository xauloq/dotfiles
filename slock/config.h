/* user and group to drop privileges to */
static const char *user  = "xauloq";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#27592d", /* during input */
	[FAILED] = "#660000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
