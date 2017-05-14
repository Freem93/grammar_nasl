
/*  A Bison parser, made from nasl_grammar.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	EQ	258
#define	NE	259
#define	LT	260
#define	GT	261
#define	LE	262
#define	GE	263
#define	SEARCH_SUBSTR	264
#define	NOT_SEARCH_SUBSTR	265
#define	POWER	266
#define	ADD	267
#define	SUB	268
#define	MUL	269
#define	DIV	270
#define	MOD	271
#define	XOR	272
#define	OR	273
#define	OR_OP	274
#define	IF	275
#define	ELSE	276
#define	FOR	277
#define	FOREACH	278
#define	WHILE	279
#define	REPEAT	280
#define	UNTIL	281
#define	BREAK	282
#define	CONTINUE	283
#define	RETURN	284
#define	INCLUDE	285
#define	STR_FIRST	286
#define	FUNCTION	287
#define	ASSIGN	288
#define	RIGHT_ASSIGN	289
#define	RIGHT_RIGHT_ASSIGN	290
#define	LEFT_ASSIGN	291
#define	ADD_ASSIGN	292
#define	SUB_ASSIGN	293
#define	MUL_ASSIGN	294
#define	DIV_ASSIGN	295
#define	MOD_ASSIGN	296
#define	AND_ASSIGN	297
#define	XOR_ASSIGN	298
#define	OR_ASSIGN	299
#define	RIGHT_OP	300
#define	RIGHT_OP_3	301
#define	LEFT_OP	302
#define	INC_OP	303
#define	DEC_OP	304
#define	AND_OP	305
#define	AND	306
#define	SEMICOLON	307
#define	LEFT_BRACE	308
#define	RIGHT_BRACE	309
#define	COMMA	310
#define	COLON	311
#define	LEFT_PARENTHESIS	312
#define	RIGHT_PARENTHESIS	313
#define	LEFT_SQ_BRACKET	314
#define	RIGHT_SQ_BRACKET	315
#define	NOT	316
#define	BIT	317
#define	NOT_BIT	318
#define	ARROW	319
#define	ASSIGN_BIT	320
#define	INTEGER	321
#define	IF_1	322
#define	IDENTIFIER	323
#define	LOCAL	324
#define	GLOBAL	325
#define	COMMENT	326

#line 1 "nasl_grammar.y"


#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#define YYPRINT(file, type, value) fprintf(file, "%d", value);
extern int yylineno;

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



#define	YYFINAL		219
#define	YYFLAG		-32768
#define	YYNTBASE	78

#define YYTRANSLATE(x) ((unsigned)(x) <= 326 ? yytranslate[x] : 115)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    72,     2,    77,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    74,    73,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    75,     2,    76,     2,     2,     2,     2,     2,     2,     2,
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
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    10,    12,    18,    19,    21,
    23,    27,    31,    34,    36,    39,    41,    43,    45,    47,
    49,    51,    54,    56,    58,    61,    64,    67,    70,    73,
    76,    79,    81,    87,    95,    97,    99,   101,   103,   113,
   119,   125,   132,   133,   135,   137,   139,   144,   149,   154,
   155,   156,   158,   160,   164,   166,   170,   174,   178,   182,
   186,   190,   194,   198,   202,   206,   208,   210,   212,   217,
   219,   222,   225,   228,   231,   235,   239,   242,   246,   250,
   254,   257,   261,   265,   269,   273,   277,   281,   285,   289,
   291,   295,   299,   303,   307,   311,   315,   319,   323,   327,
   331,   335,   339,   341,   343,   345,   347,   349,   353,   355,
   359,   361,   365,   367,   369,   371,   373,   375,   377,   379,
   387,   390
};

static const short yyrhs[] = {    -1,
    79,     0,    80,     0,    80,    79,     0,    86,     0,    81,
     0,    32,    57,    82,    58,    84,     0,     0,    83,     0,
   100,     0,   100,    72,    83,     0,    53,    85,    54,     0,
    53,    54,     0,    86,     0,    85,    86,     0,    87,     0,
    84,     0,    90,     0,    89,     0,    71,     0,    52,     0,
    98,    52,     0,   103,     0,    97,     0,    88,    52,     0,
    96,    52,     0,   113,    52,     0,   114,    52,     0,    27,
    52,     0,    28,    52,     0,    29,   104,     0,    29,     0,
    20,    57,   104,    58,    86,     0,    20,    57,   104,    58,
    86,    21,    86,     0,    91,     0,    92,     0,    93,     0,
    94,     0,    22,    57,    95,    73,   104,    73,    95,    58,
    86,     0,    24,    57,   104,    58,    86,     0,    25,    86,
    26,   104,    73,     0,    23,   100,    57,   104,    58,    86,
     0,     0,    98,     0,   103,     0,    97,     0,    30,    57,
    31,    58,     0,    67,    57,   104,    58,     0,    68,    57,
   104,    58,     0,     0,     0,     0,     0,     0,     0,     0,
    72,     0,     0,   104,     0,   100,    74,   104,     0,    99,
    33,   104,     0,    99,    37,   104,     0,    99,    38,   104,
     0,    99,    39,   104,     0,    99,    40,   104,     0,    99,
    41,   104,     0,    99,    34,   104,     0,    99,    35,   104,
     0,    99,    36,   104,     0,   100,     0,   101,     0,    68,
     0,   100,    75,   102,    76,     0,   104,     0,    48,    99,
     0,    49,    99,     0,    99,    48,     0,    99,    49,     0,
    57,   104,    58,     0,   104,    50,   104,     0,    61,   104,
     0,   104,    19,   104,     0,   104,    12,   104,     0,   104,
    13,   104,     0,    62,   104,     0,   104,    15,   104,     0,
   104,    16,   104,     0,   104,    51,   104,     0,   104,    17,
   104,     0,   104,    18,   104,     0,   104,    45,   104,     0,
   104,    46,   104,     0,   104,    47,   104,     0,   103,     0,
   104,    14,   104,     0,   104,    11,   104,     0,   104,     4,
   104,     0,   104,     3,   104,     0,   104,     5,   104,     0,
   104,     6,   104,     0,   104,     7,   104,     0,   104,     8,
   104,     0,   104,    65,   104,     0,   104,    63,   104,     0,
   104,     9,   104,     0,   104,    10,   104,     0,   110,     0,
    98,     0,   112,     0,   108,     0,   105,     0,    75,   106,
    76,     0,   107,     0,   107,    72,   106,     0,   109,     0,
    31,    64,   109,     0,    66,     0,    31,     0,   108,     0,
   111,     0,   101,     0,    97,     0,   100,     0,    66,    77,
    66,    77,    66,    77,    66,     0,    69,    82,     0,    70,
    82,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    80,    81,    84,    86,    89,    91,    94,    98,    99,   102,
   104,   107,   109,   112,   114,   117,   119,   120,   121,   122,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   137,   139,   142,   144,   147,   149,   150,   151,   154,   158,
   162,   166,   170,   171,   172,   173,   176,   180,   182,   184,
   187,   188,   190,   192,   195,   197,   200,   202,   203,   204,
   205,   206,   207,   208,   209,   212,   214,   217,   221,   225,
   229,   231,   232,   233,   236,   238,   239,   240,   241,   242,
   243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
   253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
   263,   264,   265,   266,   267,   268,   269,   272,   276,   278,
   281,   283,   288,   290,   293,   297,   299,   300,   303,   307,
   311,   315
};

static const char * const yytname[] = {   "$","error","$undefined.","EQ","NE",
"LT","GT","LE","GE","SEARCH_SUBSTR","NOT_SEARCH_SUBSTR","POWER","ADD","SUB",
"MUL","DIV","MOD","XOR","OR","OR_OP","IF","ELSE","FOR","FOREACH","WHILE","REPEAT",
"UNTIL","BREAK","CONTINUE","RETURN","INCLUDE","STR_FIRST","FUNCTION","ASSIGN",
"RIGHT_ASSIGN","RIGHT_RIGHT_ASSIGN","LEFT_ASSIGN","ADD_ASSIGN","SUB_ASSIGN",
"MUL_ASSIGN","DIV_ASSIGN","MOD_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN",
"RIGHT_OP","RIGHT_OP_3","LEFT_OP","INC_OP","DEC_OP","AND_OP","AND","SEMICOLON",
"LEFT_BRACE","RIGHT_BRACE","COMMA","COLON","LEFT_PARENTHESIS","RIGHT_PARENTHESIS",
"LEFT_SQ_BRACKET","RIGHT_SQ_BRACKET","NOT","BIT","NOT_BIT","ARROW","ASSIGN_BIT",
"INTEGER","IF_1","IDENTIFIER","LOCAL","GLOBAL","COMMENT","','","';'","':'","'['",
"']'","'.'","start","command_declaration_list","command_declaration","function_declaration",
"argument_declaration","first_argument_declaration","body","command_list","command",
"simple_command","ret","if_body","loop","for_loop","while_loop","repeat_loop",
"foreach_loop","aff_func","inc","function_call","aff","lvalue","identifier",
"array_elem","array_index","post_pre_command","expression","const_array","list_array_data",
"array_data","atom","simple_array_data","var","var_name","ipaddr","loc","glob",
"var_name"
};
#endif

static const short yyr1[] = {     0,
    78,    78,    79,    79,    80,    80,    81,    82,    82,    83,
    83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
    87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
    88,    88,    89,    89,    90,    90,    90,    90,    91,    92,
    93,    94,    95,    95,    95,    95,    96,    97,    97,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    98,    98,    98,    98,
    98,    98,    98,    98,    98,    99,    99,   100,   101,   102,
   103,   103,   103,   103,   104,   104,   104,   104,   104,   104,
   104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
   104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
   104,   104,   104,   104,   104,   104,   104,   105,   106,   106,
   107,   107,   108,   108,   109,   110,   110,   110,   111,   112,
   113,   114
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     1,     1,     5,     0,     1,     1,
     3,     3,     2,     1,     2,     1,     1,     1,     1,     1,
     1,     2,     1,     1,     2,     2,     2,     2,     2,     2,
     2,     1,     5,     7,     1,     1,     1,     1,     9,     5,
     5,     6,     0,     1,     1,     1,     4,     4,     4,     0,
     0,     1,     1,     3,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     1,     1,     1,     4,     1,
     2,     2,     2,     2,     3,     3,     2,     3,     3,     3,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     1,     1,     1,     1,     1,     3,     1,     3,
     1,     3,     1,     1,     1,     1,     1,     1,     1,     7,
     2,     2
};

static const short yydefact[] = {     1,
     0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
     0,     0,    21,     0,     0,    68,     8,     8,    20,     2,
     3,     6,    17,     5,    16,     0,    19,    18,    35,    36,
    37,    38,     0,    24,     0,     0,    66,    67,    23,     0,
     0,     0,    43,    68,     0,     0,     0,    29,    30,   114,
     0,     0,     0,   113,     0,   118,   104,   119,   117,    90,
    31,   107,   106,   103,   116,   105,     0,     8,    71,    72,
    13,     0,    14,     0,     0,   121,     9,    10,   122,     4,
    25,    26,    22,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    73,    74,     0,    27,    28,     0,     0,    46,
    44,    45,     0,     0,     0,     0,    77,    81,     0,   114,
   113,     0,   109,   115,   111,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    12,    15,     0,     0,     0,    57,    63,    64,    65,
    58,    59,    60,    61,    62,     0,    70,     0,     0,     0,
     0,     0,    75,     0,     0,   108,     0,    94,    93,    95,
    96,    97,    98,   101,   102,    92,    79,    80,    91,    82,
    83,    85,    86,    78,    87,    88,    89,    76,    84,   100,
    99,    47,     0,    48,    49,    11,    69,    33,     0,     0,
    40,    41,     0,   112,   110,     7,     0,    43,    42,     0,
    34,     0,     0,     0,   120,    39,     0,     0,     0
};

static const short yydefgoto[] = {   217,
    20,    21,    22,    76,    77,    23,    72,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    99,    33,    56,    57,
    36,    58,    59,   156,    60,    61,    62,   112,   113,    63,
   115,    64,    65,    66,    40,    41
};

static const short yypact[] = {   632,
   -47,   -32,   -40,   -23,   736,   -20,   -13,    18,   -15,   -10,
   -40,   -40,-32768,   666,    -7,    -5,   -40,   -40,-32768,-32768,
   632,-32768,-32768,-32768,-32768,    -6,-32768,-32768,-32768,-32768,
-32768,-32768,     1,-32768,     3,   634,   -16,-32768,-32768,     8,
     9,    18,   -11,-32768,     6,    18,    38,-32768,-32768,-32768,
    18,    18,    18,   -12,   -25,-32768,-32768,   212,   742,-32768,
   600,-32768,-32768,-32768,-32768,-32768,    39,   -40,-32768,-32768,
-32768,   701,-32768,    18,    18,-32768,-32768,    -1,-32768,-32768,
-32768,-32768,-32768,    18,    18,    18,    18,    18,    18,    18,
    18,    18,-32768,-32768,    18,-32768,-32768,   348,    -4,-32768,
-32768,-32768,    18,   411,    18,   432,   600,   600,    10,    13,
-32768,     5,    11,-32768,-32768,    18,    18,    18,    18,    18,
    18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
    18,    18,    18,    18,    18,    18,    18,    18,    18,    20,
    24,-32768,-32768,   495,   516,   -40,   600,   600,   600,   600,
   600,   600,   600,   600,   600,    12,   600,   736,    18,   579,
   736,   119,-32768,    21,   -18,-32768,   -25,   600,   600,   600,
   600,   600,   600,   600,   600,   600,   600,   600,   600,   600,
   600,   600,   600,   600,   600,   600,   600,   600,   600,   600,
   600,-32768,    37,-32768,-32768,-32768,-32768,    71,   327,   736,
-32768,-32768,    28,-32768,-32768,-32768,   736,   -11,-32768,    22,
-32768,    42,    29,   736,-32768,-32768,    96,    97,-32768
};

static const short yypgoto[] = {-32768,
    80,-32768,-32768,   -14,   -43,   -89,-32768,    17,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -103,-32768,     2,    19,
    -3,     0,    15,-32768,    30,   190,-32768,   -61,-32768,   -54,
   -58,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		807


static const short yytable[] = {    37,
   114,    34,    45,    79,    37,   110,    34,    69,    70,    42,
    37,    37,    50,    37,    38,    34,    78,    78,    35,    38,
    37,    47,    34,    35,    43,    38,    38,    44,    38,    39,
    73,    48,    35,    46,    39,    38,    11,    12,    49,    35,
   111,    67,    37,    39,   100,    81,    68,   111,    50,    74,
    39,    75,    82,   141,    83,    15,    16,    38,    95,    96,
    97,   101,   103,   105,   109,    11,    12,    78,   159,   140,
   146,    37,   102,    34,    51,   164,   165,   192,    52,    53,
   166,   193,   167,    54,    15,    16,    38,   197,   143,    14,
    35,   207,    55,   210,   215,   218,   219,   203,   213,   214,
    80,    39,   196,   206,   212,   205,   204,     0,     0,     0,
   114,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     0,   116,   117,   118,   119,   120,   121,   122,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,     0,     0,
     0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    37,     0,    34,
    37,     0,    34,   133,   134,   135,     0,     0,   136,   137,
     0,     0,    38,     0,   198,    38,    35,   201,     0,    35,
     0,   138,     0,   139,     0,     0,     0,    39,     0,     0,
    39,   202,     0,     0,     0,     0,     0,     0,     0,    37,
     0,    34,     0,     0,     0,     0,    37,    37,    34,   100,
     0,     0,     0,    37,    38,    34,   209,     0,    35,     0,
     0,    38,    38,   211,     0,    35,   101,     0,    38,    39,
   216,    98,    35,     0,     0,   104,    39,   102,     0,     0,
   106,   107,   108,    39,   -66,   -66,   -66,   -66,   -66,   -66,
   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
   -66,     0,     0,   144,   145,     0,     0,     0,     0,     0,
     0,     0,     0,   147,   148,   149,   150,   151,   152,   153,
   154,   155,     0,     0,   157,     0,    95,     0,     0,     0,
     0,     0,   160,     0,   162,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,   186,   187,   188,   189,   190,   191,   116,
   117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,     0,     0,   199,     0,
   116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,     0,     0,     0,
     0,   133,   134,   135,     0,     0,   136,   137,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     0,   139,   133,   134,   135,     0,     0,   136,   137,   208,
     0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
   138,     0,   139,   116,   117,   118,   119,   120,   121,   122,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     0,     0,     0,     0,   116,   117,   118,   119,   120,   121,
   122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,     0,     0,     0,     0,   133,   134,   135,     0,     0,
   136,   137,     0,     0,     0,     0,     0,     0,   161,     0,
     0,     0,     0,   138,     0,   139,   133,   134,   135,     0,
     0,   136,   137,     0,     0,     0,     0,     0,     0,   163,
     0,     0,     0,     0,   138,     0,   139,   116,   117,   118,
   119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,     0,     0,     0,     0,   116,   117,
   118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,     0,     0,     0,     0,   133,
   134,   135,     0,     0,   136,   137,     0,     0,     0,     0,
     0,     0,   194,     0,     0,     0,     0,   138,     0,   139,
   133,   134,   135,     0,     0,   136,   137,     0,     0,     0,
     0,     0,     0,   195,     0,     0,     0,     0,   138,     0,
   139,   116,   117,   118,   119,   120,   121,   122,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,     0,     0,
     0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     0,     0,     0,   133,   134,   135,     0,     0,   136,   137,
     0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
     0,   138,     0,   139,   133,   134,   135,     0,     0,   136,
   137,     1,     0,     2,     3,     4,     5,     0,     6,     7,
     8,     9,   138,    10,   139,     0,    84,    85,    86,    87,
    88,    89,    90,    91,    92,     0,     0,     0,     0,    11,
    12,    93,    94,    13,    14,     1,     0,     2,     3,     4,
     5,     0,     6,     7,     8,     9,     0,     0,    15,    16,
    17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,     0,     0,    13,    14,    71,
     1,     0,     2,     3,     4,     5,     0,     6,     7,     8,
     9,     0,    15,    16,    17,    18,    19,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     0,     0,    13,    14,   142,     1,     0,     2,     3,     4,
     5,     0,     6,     7,     8,     9,     0,    15,    16,    17,
    18,    19,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
   -67,   -67,   -67,    11,    12,     0,     0,    13,    14,   -67,
   -67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    15,    16,    17,    18,    19
};

static const short yycheck[] = {     0,
    55,     0,     3,    18,     5,    31,     5,    11,    12,    57,
    11,    12,    31,    14,     0,    14,    17,    18,     0,     5,
    21,     5,    21,     5,    57,    11,    12,    68,    14,     0,
    14,    52,    14,    57,     5,    21,    48,    49,    52,    21,
    66,    57,    43,    14,    43,    52,    57,    66,    31,    57,
    21,    57,    52,    68,    52,    67,    68,    43,    75,    52,
    52,    43,    57,    26,    77,    48,    49,    68,    73,    31,
    72,    72,    43,    72,    57,    66,    64,    58,    61,    62,
    76,    58,    72,    66,    67,    68,    72,    76,    72,    53,
    72,    21,    75,    66,    66,     0,     0,    77,    77,    58,
    21,    72,   146,   193,   208,   167,   165,    -1,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   158,
   161,    -1,   161,    45,    46,    47,    -1,    -1,    50,    51,
    -1,    -1,   158,    -1,   158,   161,   158,   161,    -1,   161,
    -1,    63,    -1,    65,    -1,    -1,    -1,   158,    -1,    -1,
   161,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
    -1,   200,    -1,    -1,    -1,    -1,   207,   208,   207,   208,
    -1,    -1,    -1,   214,   200,   214,   200,    -1,   200,    -1,
    -1,   207,   208,   207,    -1,   207,   208,    -1,   214,   200,
   214,    42,   214,    -1,    -1,    46,   207,   208,    -1,    -1,
    51,    52,    53,   214,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,
    49,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    -1,    -1,    95,    -1,    75,    -1,    -1,    -1,
    -1,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,
   121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,   138,   139,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    -1,    -1,   159,    -1,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
    -1,    65,    45,    46,    47,    -1,    -1,    50,    51,    73,
    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
    63,    -1,    65,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
    -1,    -1,    -1,    63,    -1,    65,    45,    46,    47,    -1,
    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
    -1,    -1,    -1,    -1,    63,    -1,    65,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    45,
    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,
    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
    65,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
    -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    50,    51,
    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
    -1,    63,    -1,    65,    45,    46,    47,    -1,    -1,    50,
    51,    20,    -1,    22,    23,    24,    25,    -1,    27,    28,
    29,    30,    63,    32,    65,    -1,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    48,
    49,    48,    49,    52,    53,    20,    -1,    22,    23,    24,
    25,    -1,    27,    28,    29,    30,    -1,    -1,    67,    68,
    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    53,    54,
    20,    -1,    22,    23,    24,    25,    -1,    27,    28,    29,
    30,    -1,    67,    68,    69,    70,    71,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
    -1,    -1,    52,    53,    54,    20,    -1,    22,    23,    24,
    25,    -1,    27,    28,    29,    30,    -1,    67,    68,    69,
    70,    71,    -1,    -1,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    48,    49,    -1,    -1,    52,    53,    48,
    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    67,    68,    69,    70,    71
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

case 2:
#line 81 "nasl_grammar.y"
{printf("_____simple");;
    break;}
case 5:
#line 90 "nasl_grammar.y"
{printf("_____command");;
    break;}
case 6:
#line 91 "nasl_grammar.y"
{printf("_____func_decl");;
    break;}
case 14:
#line 113 "nasl_grammar.y"
{printf("_____com_list");;
    break;}
case 15:
#line 114 "nasl_grammar.y"
{printf("_____com_com");;
    break;}
case 16:
#line 118 "nasl_grammar.y"
{printf("_____simple");;
    break;}
case 33:
#line 143 "nasl_grammar.y"
{printf("_____if");;
    break;}
case 48:
#line 181 "nasl_grammar.y"
{printf("_____if");;
    break;}
case 49:
#line 182 "nasl_grammar.y"
{printf("_____call");;
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
#line 320 "nasl_grammar.y"

#include <stdio.h>
extern char yytext[];
extern int column;
yyerror(char const *s)
{
	
	printf("\n%d\n", yylineno);
	fflush(stdout);
	fprintf(stderr, "%s", s);
}
lex()
{
	printf("\n%s\n", stdin);
}
int main()
{
	return(yyparse());
}
