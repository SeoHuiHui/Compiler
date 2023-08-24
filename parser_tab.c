
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDENT	258
#define	TNUMBER	259
#define	TCONST	260
#define	TELSE	261
#define	TIF	262
#define	TINT	263
#define	TRETURN	264
#define	TVOID	265
#define	TWHILE	266
#define	TCOMMENT	267
#define	TERROR	268
#define	TCARR	269
#define	TADDASSIGN	270
#define	TSUBASSIGN	271
#define	TMULASSIGN	272
#define	TDIVASSIGN	273
#define	TMODASSIGN	274
#define	TASSIGN	275
#define	TOR	276
#define	TAND	277
#define	TNOTEQU	278
#define	TEQUAL	279
#define	TNOT	280
#define	TGREAT	281
#define	TLESS	282
#define	TLESSE	283
#define	TGREATE	284
#define	TINC	285
#define	TDEC	286
#define	TPLUS	287
#define	TMINUS	288
#define	TSTAR	289
#define	TSLASH	290
#define	TMOD	291
#define	TLPAREN	292
#define	TRPAREN	293
#define	TCOMMA	294
#define	TLBRACE	295
#define	TRBRACE	296
#define	TLBRACKET	297
#define	TRBRACKET	298
#define	TSEMI	299
#define	LOWER_THAN_ELSE	300
#define	TIF_ERROR	301
#define	TIF_CONDITION_ERROR	302
#define	TELSE_ERROR	303
#define	TELSE_CONDITION_ERROR	304

#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "glob.h"


extern yylex();
extern void yyerror(char *s);


int identifier;
int identifier_type;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		201
#define	YYFLAG		-32768
#define	YYNTBASE	50

#define YYTRANSLATE(x) ((unsigned)(x) <= 304 ? yytranslate[x] : 95)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    27,    29,    31,    34,    36,    38,    40,    42,    44,    46,
    50,    54,    56,    57,    59,    63,    66,    68,    73,    75,
    76,    78,    81,    85,    89,    91,    95,    99,   101,   105,
   109,   111,   116,   121,   123,   124,   126,   127,   129,   132,
   135,   137,   139,   141,   143,   145,   148,   151,   153,   154,
   160,   165,   171,   179,   186,   194,   199,   205,   211,   216,
   220,   224,   226,   228,   232,   236,   240,   244,   248,   252,
   256,   260,   264,   268,   272,   276,   278,   282,   284,   288,
   290,   294,   298,   302,   306,   308,   312,   316,   320,   324,
   328,   332,   336,   340,   342,   346,   350,   354,   358,   360,
   364,   368,   372,   376,   380,   384,   386,   389,   392,   395,
   398,   400,   405,   410,   415,   418,   421,   423,   424,   426,
   428,   432,   434,   436,   440
};

static const short yyrhs[] = {    51,
     0,    52,     0,    51,    52,     0,    53,     0,    68,     0,
     3,    44,     0,     3,     1,     0,    54,    65,     0,     1,
    65,     0,    55,    60,    61,     0,    56,     0,    57,     0,
    56,    57,     0,    58,     0,    59,     0,     5,     0,     8,
     0,    10,     0,     3,     0,    37,    62,    38,     0,    37,
    62,     1,     0,    63,     0,     0,    64,     0,    63,    39,
    64,     0,    55,    71,     0,    71,     0,    40,    66,    73,
    41,     0,    67,     0,     0,    68,     0,    67,    68,     0,
    55,    69,    44,     0,    55,    69,     1,     0,    70,     0,
    69,    39,    70,     0,    69,    39,     1,     0,    71,     0,
    71,    24,     4,     0,    71,    20,     4,     0,     3,     0,
     3,    42,    72,    43,     0,     3,    42,    72,     1,     0,
     4,     0,     0,    74,     0,     0,    75,     0,    74,    68,
     0,    74,    75,     0,    65,     0,    76,     0,    78,     0,
    79,     0,    80,     0,    77,    44,     0,    81,     1,     0,
    81,     0,     0,     7,    37,    81,    38,    75,     0,     7,
    37,    38,    75,     0,     7,    37,    81,     1,    75,     0,
     7,    37,    81,    38,    75,     6,    75,     0,     7,    37,
    38,    75,     6,    75,     0,     7,    37,    81,     1,    75,
     6,    75,     0,     7,    37,    38,     1,     0,    11,    37,
    81,    38,    75,     0,    11,    37,    81,     1,    75,     0,
    11,    37,    38,    75,     0,     9,    77,    44,     0,     9,
    77,     1,     0,    82,     0,    83,     0,    89,    20,    82,
     0,    89,    15,    82,     0,    89,    16,    82,     0,    89,
    17,    82,     0,    89,    18,    82,     0,    89,    19,    82,
     0,    89,    20,     1,     0,    89,    15,     1,     0,    89,
    16,     1,     0,    89,    17,     1,     0,    89,    18,     1,
     0,    89,    19,     1,     0,    84,     0,    83,    21,    84,
     0,    85,     0,    84,    22,    85,     0,    86,     0,    85,
    24,    86,     0,    85,    23,    86,     0,    85,    24,     1,
     0,    85,    23,     1,     0,    87,     0,    86,    26,    87,
     0,    86,    27,    87,     0,    86,    29,    87,     0,    86,
    28,    87,     0,    86,    26,     1,     0,    86,    27,     1,
     0,    86,    29,     1,     0,    86,    28,     1,     0,    88,
     0,    87,    32,    88,     0,    87,    32,     1,     0,    87,
    33,    88,     0,    87,    33,     1,     0,    89,     0,    88,
    34,    89,     0,    88,    35,    89,     0,    88,    36,    89,
     0,    88,    34,     1,     0,    88,    35,     1,     0,    88,
    36,     1,     0,    90,     0,    33,    89,     0,    25,    89,
     0,    30,    89,     0,    31,    89,     0,    94,     0,    90,
    42,    81,    43,     0,    90,    42,    81,     1,     0,    90,
    37,    91,    38,     0,    90,    30,     0,    90,    31,     0,
    92,     0,     0,    93,     0,    82,     0,    93,    39,    82,
     0,     3,     0,     4,     0,    37,    81,    38,     0,    37,
    81,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    33,    34,    35,    36,    37,    38,    39,    44,    46,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    76,
    77,    81,    82,    83,    84,    89,    90,    97,   100,   101,
   102,   103,   104,   105,   109,   110,   111,   115,   116,   119,
   120,   132,   139,   144,   145,   146,   147,   148,   149,   150,
   152,   153,   154,   155,   156,   158,   159,   163,   164,   165,
   166,   169,   172,   173,   176,   179,   183,   184,   187,   191,
   192,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   206,   209,   212,   215,   218,   222,   223,   226,   227,   231,
   232,   233,   234,   237,   241,   242,   243,   244,   245,   246,
   249,   252,   255,   259,   260,   261,   264,   265,   268,   269,
   270,   271,   272,   275,   278,   282,   283,   284,   285,   286,
   287,   288,   289,   292,   293,   294,   295,   296,   297,   298,
   299,   300,   301,   302,   303
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDENT",
"TNUMBER","TCONST","TELSE","TIF","TINT","TRETURN","TVOID","TWHILE","TCOMMENT",
"TERROR","TCARR","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN",
"TASSIGN","TOR","TAND","TNOTEQU","TEQUAL","TNOT","TGREAT","TLESS","TLESSE","TGREATE",
"TINC","TDEC","TPLUS","TMINUS","TSTAR","TSLASH","TMOD","TLPAREN","TRPAREN","TCOMMA",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TSEMI","LOWER_THAN_ELSE","TIF_ERROR",
"TIF_CONDITION_ERROR","TELSE_ERROR","TELSE_CONDITION_ERROR","mini_c","translation_unit",
"external_dcl","function_def","function_header","dcl_spec","dcl_specifiers",
"dcl_specifier","type_qualifier","type_specifier","function_name","formal_param",
"opt_formal_param","formal_param_list","param_dcl","compound_st","opt_dcl_list",
"declaration_list","declaration","init_dcl_list","init_declarator","declarator",
"opt_number","opt_stat_list","statement_list","statement","expression_st","opt_expression",
"if_st","while_st","return_st","expression","assignment_exp","logical_or_exp",
"logical_and_exp","equality_exp","relational_exp","additive_exp","multiplicative_exp",
"unary_exp","postfix_exp","opt_actual_param","actual_param","actual_param_list",
"primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    50,    51,    51,    52,    52,    52,    52,    53,    53,    54,
    55,    56,    56,    57,    57,    58,    59,    59,    60,    61,
    61,    62,    62,    63,    63,    64,    64,    65,    66,    66,
    67,    67,    68,    68,    69,    69,    69,    70,    70,    70,
    71,    71,    71,    72,    72,    73,    73,    74,    74,    74,
    75,    75,    75,    75,    75,    76,    76,    77,    77,    78,
    78,    78,    78,    78,    78,    78,    79,    79,    79,    80,
    80,    81,    82,    82,    82,    82,    82,    82,    82,    82,
    82,    82,    82,    82,    82,    83,    83,    84,    84,    85,
    85,    85,    85,    85,    86,    86,    86,    86,    86,    86,
    86,    86,    86,    87,    87,    87,    87,    87,    88,    88,
    88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
    90,    90,    90,    90,    90,    90,    91,    91,    92,    93,
    93,    94,    94,    94,    94
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     3,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
     3,     1,     0,     1,     3,     2,     1,     4,     1,     0,
     1,     2,     3,     3,     1,     3,     3,     1,     3,     3,
     1,     4,     4,     1,     0,     1,     0,     1,     2,     2,
     1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
     4,     5,     7,     6,     7,     4,     5,     5,     4,     3,
     3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     1,     3,     1,     3,     1,
     3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
     3,     3,     3,     3,     3,     1,     2,     2,     2,     2,
     1,     4,     4,     4,     2,     2,     1,     0,     1,     1,
     3,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,    16,    17,    18,     0,     2,     4,     0,     0,
    11,    12,    14,    15,     5,    30,     9,     7,     6,     3,
     8,    41,     0,     0,    35,    38,    13,     0,    47,    29,
    31,    45,    23,    10,    34,     0,    33,     0,     0,    41,
   132,   133,     0,    59,     0,     0,     0,     0,     0,     0,
    51,     0,    46,    48,    52,     0,    53,    54,    55,     0,
    72,    73,    86,    88,    90,    95,   104,   109,   116,   121,
    32,    44,     0,     0,     0,    22,    24,    27,    37,    36,
    40,    39,     0,     0,    58,     0,   118,   119,   120,   117,
     0,    28,    49,    50,    56,    57,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   125,   126,   128,     0,    43,
    42,    26,    21,    20,     0,     0,     0,    71,    70,    59,
     0,   135,   134,    87,   109,    89,    94,    92,    93,    91,
   100,    96,   101,    97,   103,    99,   102,    98,   106,   105,
   108,   107,   113,   110,   114,   111,   115,   112,    81,    75,
    82,    76,    83,    77,    84,    78,    85,    79,    80,    74,
   130,     0,   127,   129,     0,    25,    66,    61,    59,    59,
    69,    59,    59,   124,     0,   123,   122,    59,    62,    60,
    68,    67,   131,    64,    59,    59,    65,    63,     0,     0,
     0
};

static const short yydefgoto[] = {   199,
     6,     7,     8,     9,    28,    11,    12,    13,    14,    23,
    34,    75,    76,    77,    51,    29,    30,    15,    24,    25,
    26,    73,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   172,   173,   174,    70
};

static const short yypact[] = {   195,
   -36,     5,-32768,-32768,-32768,    79,-32768,-32768,   -36,    58,
    78,-32768,-32768,-32768,-32768,    78,-32768,-32768,-32768,-32768,
-32768,    -2,   -17,    18,-32768,    17,-32768,    61,   145,    78,
-32768,    70,   154,-32768,-32768,    20,-32768,    74,    86,    50,
-32768,-32768,    76,   411,    88,   411,   411,   411,   411,   411,
-32768,    95,   107,-32768,-32768,    97,-32768,-32768,-32768,     6,
-32768,   118,   128,    48,   352,   113,    73,   104,    39,-32768,
-32768,-32768,     4,    61,     1,   114,-32768,-32768,-32768,-32768,
-32768,-32768,   380,     7,-32768,   391,-32768,-32768,-32768,-32768,
    27,-32768,-32768,-32768,-32768,-32768,   411,   411,   130,   176,
   187,   207,   218,   227,   238,   258,   269,   278,   289,   309,
   320,   329,   340,   360,   371,-32768,-32768,   411,   411,-32768,
-32768,-32768,-32768,-32768,   154,    23,    28,-32768,-32768,   162,
    30,-32768,-32768,   128,-32768,    48,-32768,   352,-32768,   352,
-32768,   113,-32768,   113,-32768,   113,-32768,   113,-32768,    73,
-32768,    73,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   120,-32768,   129,    16,-32768,-32768,-32768,   162,   162,
-32768,   162,   162,-32768,   411,-32768,-32768,   162,-32768,   166,
-32768,-32768,-32768,-32768,   162,   162,-32768,-32768,   174,   181,
-32768
};

static const short yypgoto[] = {-32768,
-32768,   180,-32768,-32768,     3,-32768,   183,-32768,-32768,-32768,
-32768,-32768,-32768,    72,    24,-32768,-32768,    22,-32768,   168,
   -32,-32768,-32768,-32768,   -53,-32768,   172,-32768,-32768,-32768,
   -28,  -100,-32768,   126,   127,    84,   132,   109,    -3,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		448


static const short yytable[] = {    94,
    78,   123,    10,    16,   120,    18,    96,   128,    10,   160,
   162,   164,   166,   168,   170,    85,   186,   171,    35,    33,
    79,    91,    40,   177,    17,    41,    42,   132,   179,    43,
   182,    44,    21,    45,   -19,    74,    38,    31,   124,    32,
    39,   122,    87,    88,    89,    90,   121,    46,    19,   -58,
   129,    71,    47,    48,   127,    49,    36,   131,   187,    50,
    22,    37,    16,    40,   133,   180,   -59,   183,   116,   117,
    99,   100,   178,    72,    93,   118,   181,    81,    -1,     1,
   119,     2,     3,     3,   193,     4,     4,     5,     5,    82,
   175,    32,    78,   135,   135,   135,   135,   135,   135,   135,
   135,   135,   135,   154,   156,   158,   107,   108,   109,    41,
    42,     3,    83,    43,     4,    44,     5,    45,   110,   111,
   112,   113,   114,   115,    86,   189,   190,    74,   191,   192,
   137,    46,    41,    42,   194,    92,    47,    48,    97,    49,
    95,   197,   198,    50,   105,   106,    16,    41,    42,    98,
   -59,    43,   125,    44,    46,    45,    40,   184,     3,    47,
    48,     4,    49,     5,    41,    42,    50,   185,    43,    46,
    44,   196,    45,   200,    47,    48,   139,    49,    41,    42,
   201,    50,   138,   140,    16,    20,    46,   141,   -59,    41,
    42,    47,    48,    27,    49,     1,   176,     2,    50,     3,
    46,    16,     4,    80,     5,    47,    48,   143,    49,    41,
    42,    46,    50,   150,   152,    84,    47,    48,   145,    49,
    41,    42,   134,    50,   136,     0,     0,   147,     0,    41,
    42,    46,   142,   144,   146,   148,    47,    48,   149,    49,
    41,    42,    46,    50,     0,     0,     0,    47,    48,     0,
    49,    46,     0,     0,    50,     0,    47,    48,   151,    49,
    41,    42,    46,    50,     0,     0,     0,    47,    48,   153,
    49,    41,    42,     0,    50,     0,     0,     0,   155,     0,
    41,    42,    46,     0,     0,     0,     0,    47,    48,   157,
    49,    41,    42,    46,    50,     0,     0,     0,    47,    48,
     0,    49,    46,     0,     0,    50,     0,    47,    48,   159,
    49,    41,    42,    46,    50,     0,     0,     0,    47,    48,
   161,    49,    41,    42,     0,    50,     0,     0,     0,   163,
     0,    41,    42,    46,     0,     0,     0,     0,    47,    48,
   165,    49,    41,    42,    46,    50,     0,     0,     0,    47,
    48,     0,    49,    46,     0,     0,    50,     0,    47,    48,
   167,    49,    41,    42,    46,    50,     0,     0,     0,    47,
    48,   169,    49,    41,    42,     0,    50,   101,   102,   103,
   104,     0,    41,    42,    46,     0,     0,     0,     0,    47,
    48,     0,    49,    41,    42,    46,    50,     0,     0,     0,
    47,    48,     0,    49,    46,     0,     0,    50,     0,    47,
    48,     0,    49,    41,    42,    46,    50,   126,     0,     0,
    47,    48,     0,    49,     0,     0,     0,    50,   130,     0,
     0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
    47,    48,     0,    49,     0,     0,     0,    50
};

static const short yycheck[] = {    53,
    33,     1,     0,    40,     1,     1,     1,     1,     6,   110,
   111,   112,   113,   114,   115,    44,     1,   118,     1,    37,
     1,    50,     3,     1,     1,     3,     4,     1,     1,     7,
     1,     9,     9,    11,    37,    33,    20,    16,    38,    42,
    24,    74,    46,    47,    48,    49,    43,    25,    44,    44,
    44,    30,    30,    31,    83,    33,    39,    86,    43,    37,
     3,    44,    40,     3,    38,    38,    44,    38,    30,    31,
    23,    24,   126,     4,    53,    37,   130,     4,     0,     1,
    42,     3,     5,     5,   185,     8,     8,    10,    10,     4,
   119,    42,   125,    97,    98,    99,   100,   101,   102,   103,
   104,   105,   106,   107,   108,   109,    34,    35,    36,     3,
     4,     5,    37,     7,     8,     9,    10,    11,    15,    16,
    17,    18,    19,    20,    37,   179,   180,   125,   182,   183,
     1,    25,     3,     4,   188,    41,    30,    31,    21,    33,
    44,   195,   196,    37,    32,    33,    40,     3,     4,    22,
    44,     7,    39,     9,    25,    11,     3,    38,     5,    30,
    31,     8,    33,    10,     3,     4,    37,    39,     7,    25,
     9,     6,    11,     0,    30,    31,     1,    33,     3,     4,
     0,    37,    99,   100,    40,     6,    25,     1,    44,     3,
     4,    30,    31,    11,    33,     1,   125,     3,    37,     5,
    25,    40,     8,    36,    10,    30,    31,     1,    33,     3,
     4,    25,    37,   105,   106,    44,    30,    31,     1,    33,
     3,     4,    97,    37,    98,    -1,    -1,     1,    -1,     3,
     4,    25,   101,   102,   103,   104,    30,    31,     1,    33,
     3,     4,    25,    37,    -1,    -1,    -1,    30,    31,    -1,
    33,    25,    -1,    -1,    37,    -1,    30,    31,     1,    33,
     3,     4,    25,    37,    -1,    -1,    -1,    30,    31,     1,
    33,     3,     4,    -1,    37,    -1,    -1,    -1,     1,    -1,
     3,     4,    25,    -1,    -1,    -1,    -1,    30,    31,     1,
    33,     3,     4,    25,    37,    -1,    -1,    -1,    30,    31,
    -1,    33,    25,    -1,    -1,    37,    -1,    30,    31,     1,
    33,     3,     4,    25,    37,    -1,    -1,    -1,    30,    31,
     1,    33,     3,     4,    -1,    37,    -1,    -1,    -1,     1,
    -1,     3,     4,    25,    -1,    -1,    -1,    -1,    30,    31,
     1,    33,     3,     4,    25,    37,    -1,    -1,    -1,    30,
    31,    -1,    33,    25,    -1,    -1,    37,    -1,    30,    31,
     1,    33,     3,     4,    25,    37,    -1,    -1,    -1,    30,
    31,     1,    33,     3,     4,    -1,    37,    26,    27,    28,
    29,    -1,     3,     4,    25,    -1,    -1,    -1,    -1,    30,
    31,    -1,    33,     3,     4,    25,    37,    -1,    -1,    -1,
    30,    31,    -1,    33,    25,    -1,    -1,    37,    -1,    30,
    31,    -1,    33,     3,     4,    25,    37,    38,    -1,    -1,
    30,    31,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,
    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
    30,    31,    -1,    33,    -1,    -1,    -1,    37
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 7:
#line 39 "parser.y"
{
					yyerrok; 
					err = miss_semi; PrintError(err); return(TERROR); //TERROR 리턴? 
				;
    break;}
case 9:
#line 46 "parser.y"
{
					yyerrok; 
					err = func_head; PrintError(err); return(TERROR); 
				;
    break;}
case 17:
#line 58 "parser.y"
{identifier_type = 1;;
    break;}
case 18:
#line 59 "parser.y"
{identifier_type = 2; ;
    break;}
case 19:
#line 61 "parser.y"
{ 

					if(look_id -> type == 0|look_id -> type == 6){
					
						if(identifier_type == 2){
							look_id -> type = 4; //function return void
						}else if(identifier_type == 1){
							look_id -> type = 8; //function return int					
						}

						identifier_type = 0;
						look_tmp = look_id;
						}
					;
    break;}
case 21:
#line 77 "parser.y"
{
					yyerrok;
					err = close_brac; PrintError(err); return(TERROR); 
				;
    break;}
case 27:
#line 90 "parser.y"
{
					 if(identifier_type == 1){ /* int�??�정??경우 */
                        look_id->type = 10;  /* integer scalar parameter */
						}
						identifier_type = 0;
				;
    break;}
case 34:
#line 105 "parser.y"
{
					yyerrok; look_tmp -> type =0;
					err = miss_semi; PrintError(err); return(TERROR);
				;
    break;}
case 37:
#line 111 "parser.y"
{
					yyerrok; identifier_type =0;
					err = miss_semi; PrintError(err); return(TERROR);
				;
    break;}
case 39:
#line 116 "parser.y"
{
					yyerrok; identifier_type =0; 
					err = dec_err; PrintError(err); return(TERROR); ;
    break;}
case 41:
#line 120 "parser.y"
{ 
					if(look_id -> type == 0){	
						
						if(identifier_type == 1){
                              look_id->type=1; /* integer scalar variable */
                        }else if(identifier_type == 2){
                              look_id->type=2; /* void scalar variable */   
						}
					}				
					look_tmp=look_id;
					;
    break;}
case 42:
#line 132 "parser.y"
{  
						if(look_id->type==0){
                        if(identifier_type == 1)look_id->type=3; /* array integer variable */ 
						}

						look_tmp = look_id;
						;
    break;}
case 43:
#line 139 "parser.y"
{
					yyerrok;
					err = lar_brac; PrintError(err); return(TERROR);
					;
    break;}
case 57:
#line 159 "parser.y"
{
					yyerrok; 
					err = miss_semi; PrintError(err); return(TERROR);
				;
    break;}
case 61:
#line 166 "parser.y"
{
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); ;
    break;}
case 62:
#line 169 "parser.y"
{
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); ;
    break;}
case 64:
#line 173 "parser.y"
{ 
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); ;
    break;}
case 65:
#line 176 "parser.y"
{
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); ;
    break;}
case 66:
#line 179 "parser.y"
{ 
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); ;
    break;}
case 68:
#line 184 "parser.y"
{
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); ;
    break;}
case 69:
#line 187 "parser.y"
{
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); ;
    break;}
case 71:
#line 192 "parser.y"
{
					yyerrok; identifier_type = 0;
					err = miss_semi; PrintError(err); return(TERROR); ;
    break;}
case 80:
#line 203 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 81:
#line 206 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 82:
#line 209 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 83:
#line 212 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 84:
#line 215 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 85:
#line 218 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 93:
#line 234 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 94:
#line 237 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 100:
#line 246 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 101:
#line 249 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 102:
#line 252 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 103:
#line 255 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 106:
#line 261 "parser.y"
{
					yyerrok; 
					err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 108:
#line 265 "parser.y"
{
					yyerrok; 
					err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 113:
#line 272 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 114:
#line 275 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 115:
#line 278 "parser.y"
{
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); ;
    break;}
case 123:
#line 289 "parser.y"
{
					yyerrok; 
					err = lar_brac; PrintError(err); return(TERROR); ;
    break;}
case 132:
#line 300 "parser.y"
{ if(look_id -> type == 0) look_id ->type = 5;;
    break;}
case 135:
#line 303 "parser.y"
{
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 306 "parser.y"
