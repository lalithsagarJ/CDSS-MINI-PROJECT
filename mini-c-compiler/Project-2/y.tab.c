/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include "symboltable.h"

	entry_t** symbol_table;
  entry_t** constant_table;

	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	int current_dtype;
	int yyerror(char *msg);

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    DEC_CONSTANT = 259,            /* DEC_CONSTANT  */
    HEX_CONSTANT = 260,            /* HEX_CONSTANT  */
    STRING = 261,                  /* STRING  */
    LOGICAL_AND = 262,             /* LOGICAL_AND  */
    LOGICAL_OR = 263,              /* LOGICAL_OR  */
    LS_EQ = 264,                   /* LS_EQ  */
    GR_EQ = 265,                   /* GR_EQ  */
    EQ = 266,                      /* EQ  */
    NOT_EQ = 267,                  /* NOT_EQ  */
    MUL_ASSIGN = 268,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 269,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 270,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 271,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 272,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 273,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 274,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 275,              /* AND_ASSIGN  */
    XOR_ASSIGN = 276,              /* XOR_ASSIGN  */
    OR_ASSIGN = 277,               /* OR_ASSIGN  */
    INCREMENT = 278,               /* INCREMENT  */
    DECREMENT = 279,               /* DECREMENT  */
    SHORT = 280,                   /* SHORT  */
    INT = 281,                     /* INT  */
    LONG = 282,                    /* LONG  */
    LONG_LONG = 283,               /* LONG_LONG  */
    SIGNED = 284,                  /* SIGNED  */
    UNSIGNED = 285,                /* UNSIGNED  */
    CONST = 286,                   /* CONST  */
    IF = 287,                      /* IF  */
    FOR = 288,                     /* FOR  */
    WHILE = 289,                   /* WHILE  */
    CONTINUE = 290,                /* CONTINUE  */
    BREAK = 291,                   /* BREAK  */
    RETURN = 292,                  /* RETURN  */
    UMINUS = 293,                  /* UMINUS  */
    LOWER_THAN_ELSE = 294,         /* LOWER_THAN_ELSE  */
    ELSE = 295                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define DEC_CONSTANT 259
#define HEX_CONSTANT 260
#define STRING 261
#define LOGICAL_AND 262
#define LOGICAL_OR 263
#define LS_EQ 264
#define GR_EQ 265
#define EQ 266
#define NOT_EQ 267
#define MUL_ASSIGN 268
#define DIV_ASSIGN 269
#define MOD_ASSIGN 270
#define ADD_ASSIGN 271
#define SUB_ASSIGN 272
#define LEFT_ASSIGN 273
#define RIGHT_ASSIGN 274
#define AND_ASSIGN 275
#define XOR_ASSIGN 276
#define OR_ASSIGN 277
#define INCREMENT 278
#define DECREMENT 279
#define SHORT 280
#define INT 281
#define LONG 282
#define LONG_LONG 283
#define SIGNED 284
#define UNSIGNED 285
#define CONST 286
#define IF 287
#define FOR 288
#define WHILE 289
#define CONTINUE 290
#define BREAK 291
#define RETURN 292
#define UMINUS 293
#define LOWER_THAN_ELSE 294
#define ELSE 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

	double dval;
	entry_t* entry;
	int ival;

#line 223 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_DEC_CONSTANT = 4,               /* DEC_CONSTANT  */
  YYSYMBOL_HEX_CONSTANT = 5,               /* HEX_CONSTANT  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_LOGICAL_AND = 7,                /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 8,                 /* LOGICAL_OR  */
  YYSYMBOL_LS_EQ = 9,                      /* LS_EQ  */
  YYSYMBOL_GR_EQ = 10,                     /* GR_EQ  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 12,                    /* NOT_EQ  */
  YYSYMBOL_MUL_ASSIGN = 13,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 14,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 15,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 16,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 17,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 18,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 19,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 20,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 21,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 22,                 /* OR_ASSIGN  */
  YYSYMBOL_INCREMENT = 23,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 24,                 /* DECREMENT  */
  YYSYMBOL_SHORT = 25,                     /* SHORT  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_LONG = 27,                      /* LONG  */
  YYSYMBOL_LONG_LONG = 28,                 /* LONG_LONG  */
  YYSYMBOL_SIGNED = 29,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 30,                  /* UNSIGNED  */
  YYSYMBOL_CONST = 31,                     /* CONST  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_CONTINUE = 35,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* '<'  */
  YYSYMBOL_41_ = 41,                       /* '>'  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* '%'  */
  YYSYMBOL_47_ = 47,                       /* '!'  */
  YYSYMBOL_UMINUS = 48,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 49,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ELSE = 50,                      /* ELSE  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_starter = 59,                   /* starter  */
  YYSYMBOL_builder = 60,                   /* builder  */
  YYSYMBOL_function = 61,                  /* function  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_pointer = 63,                   /* pointer  */
  YYSYMBOL_data_type = 64,                 /* data_type  */
  YYSYMBOL_sign_specifier = 65,            /* sign_specifier  */
  YYSYMBOL_type_specifier = 66,            /* type_specifier  */
  YYSYMBOL_argument_list = 67,             /* argument_list  */
  YYSYMBOL_arguments = 68,                 /* arguments  */
  YYSYMBOL_arg = 69,                       /* arg  */
  YYSYMBOL_stmt = 70,                      /* stmt  */
  YYSYMBOL_compound_stmt = 71,             /* compound_stmt  */
  YYSYMBOL_statements = 72,                /* statements  */
  YYSYMBOL_single_stmt = 73,               /* single_stmt  */
  YYSYMBOL_for_block = 74,                 /* for_block  */
  YYSYMBOL_if_block = 75,                  /* if_block  */
  YYSYMBOL_while_block = 76,               /* while_block  */
  YYSYMBOL_declaration = 77,               /* declaration  */
  YYSYMBOL_declaration_list = 78,          /* declaration_list  */
  YYSYMBOL_sub_decl = 79,                  /* sub_decl  */
  YYSYMBOL_expression_stmt = 80,           /* expression_stmt  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_sub_expr = 82,                  /* sub_expr  */
  YYSYMBOL_assignment_expr = 83,           /* assignment_expr  */
  YYSYMBOL_unary_expr = 84,                /* unary_expr  */
  YYSYMBOL_lhs = 85,                       /* lhs  */
  YYSYMBOL_assign_op = 86,                 /* assign_op  */
  YYSYMBOL_arithmetic_expr = 87,           /* arithmetic_expr  */
  YYSYMBOL_constant = 88,                  /* constant  */
  YYSYMBOL_array_index = 89,               /* array_index  */
  YYSYMBOL_function_call = 90,             /* function_call  */
  YYSYMBOL_parameter_list = 91,            /* parameter_list  */
  YYSYMBOL_parameter = 92                  /* parameter  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   373

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    46,     2,     2,
      51,    52,    44,    42,    38,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      40,    39,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    72,    75,    76,    79,    83,    84,    86,
      87,    90,    91,    94,    95,    98,    99,   100,   101,   102,
     103,   104,   109,   110,   113,   114,   118,   122,   123,   127,
     130,   131,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   146,   147,   150,   151,   154,   157,   158,   159,   161,
     162,   164,   165,   166,   171,   172,   176,   177,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     199,   200,   201,   202,   203,   206,   207,   208,   209,   211,
     215,   216,   217,   218,   219,   220,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   234,   235,   238,   240,   241,
     245,   246,   249,   250
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "DEC_CONSTANT", "HEX_CONSTANT", "STRING", "LOGICAL_AND", "LOGICAL_OR",
  "LS_EQ", "GR_EQ", "EQ", "NOT_EQ", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "INCREMENT", "DECREMENT",
  "SHORT", "INT", "LONG", "LONG_LONG", "SIGNED", "UNSIGNED", "CONST", "IF",
  "FOR", "WHILE", "CONTINUE", "BREAK", "RETURN", "','", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS",
  "LOWER_THAN_ELSE", "ELSE", "'('", "')'", "'{'", "'}'", "';'", "'['",
  "']'", "$accept", "starter", "builder", "function", "type", "pointer",
  "data_type", "sign_specifier", "type_specifier", "argument_list",
  "arguments", "arg", "stmt", "compound_stmt", "statements", "single_stmt",
  "for_block", "if_block", "while_block", "declaration",
  "declaration_list", "sub_decl", "expression_stmt", "expression",
  "sub_expr", "assignment_expr", "unary_expr", "lhs", "assign_op",
  "arithmetic_expr", "constant", "array_index", "function_call",
  "parameter_list", "parameter", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    44,    61,
      60,    62,    43,    45,    42,    47,    37,    33,   293,   294,
     295,    40,    41,   123,   125,    59,    91,    93
};
#endif

#define YYPACT_NINF (-43)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     300,   -26,    30,    30,    17,   -43,    20,    44,   -43,   -43,
     292,   -43,   -43,    14,    29,   333,   -43,   -43,   -23,   -43,
     -43,    82,   245,   -43,   220,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,    33,    -3,   323,    29,   -43,   -43,    91,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   117,   -43,
     -43,     4,   318,   -43,   -43,    88,   220,    88,    71,   -43,
     323,   327,   -43,   338,   -43,   -43,   -43,   -43,    84,   -20,
     -43,   327,   -43,   -43,   -43,   -43,   -43,   255,   220,   220,
     220,   220,   220,   220,   220,   220,   -43,    88,    88,    88,
      88,    88,    72,    25,    66,   -43,   189,   -43,     9,   271,
     -43,   -43,    13,    13,   -43,   -43,   176,   176,   -43,   -43,
     -43,   -43,    74,   338,   -43,   -43,   265,    64,   -43,   -43,
     -43,   -43,   205,   -43,   119,   -43,   258,    78,    79,    81,
      83,   103,    21,   -43,    91,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   121,   220,    62,   220,   -43,   -43,   -43,   194,
     -43,   112,   265,   -43,    62,    68,   123,   -43,   220,   154,
     195,   -43,   154,   265,   124,   154,   178,   -43,   154,   -43,
     154,   -43,   -43
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    79,     0,     0,    17,    15,    18,    20,    13,    14,
       0,     3,     4,     0,     8,     0,    12,     5,     0,    50,
      51,     0,     0,    53,     0,    79,    78,    77,    16,    19,
      21,     1,     2,    79,     0,     0,    10,     7,    11,     0,
      47,    83,    84,    85,    81,    82,    80,    48,     0,    75,
      76,     0,    93,    95,    96,     0,     0,     0,     0,    68,
      69,    67,    94,    23,    46,     9,    49,    74,     0,    93,
      73,    70,    71,    72,    93,    92,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    22,    25,     0,    91,    64,    65,
      62,    63,    60,    61,    59,    58,    86,    87,    88,    89,
      90,    26,     0,     0,   103,    99,   102,     0,   101,    31,
       6,    24,     0,    98,     0,   100,    79,     0,     0,     0,
       0,     0,     0,    29,     0,    30,    27,    28,    33,    32,
      34,    35,     0,     0,     0,     0,    38,    39,    37,     0,
      36,     0,    57,    55,     0,     0,     0,    40,     0,     0,
       0,    54,     0,    56,    43,     0,     0,    45,     0,    41,
       0,    44,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -43,   157,   -43,     6,    97,   -43,   -43,   170,   -43,
     -43,   101,   184,    85,   -43,   -43,   -43,   -43,   -43,   217,
      -8,   187,    42,   -42,   -22,     1,     0,    39,   193,   200,
     -43,   180,   182,   -43,   115
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    12,   134,    37,    14,    15,    16,    93,
      94,    95,   135,   136,   124,   137,   138,   139,   140,   141,
      18,    19,   154,   155,   152,    59,    60,    22,    48,    61,
      62,    23,   142,   117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    20,    58,   -79,   -79,    34,    13,    69,    53,    54,
      21,    20,   -52,    35,    20,    39,    13,    33,    80,    81,
      82,    83,    80,    81,    52,    53,    54,     2,     3,   -52,
      24,    96,    40,    25,    76,    39,    24,     2,     3,    35,
      20,    26,    27,    28,     2,     3,    29,    55,    67,    84,
      85,    70,    64,    84,    85,    57,    98,    99,   100,   101,
     102,   103,   104,   105,    55,    52,    53,    54,    56,    92,
      30,   -52,    57,    36,   116,   111,   148,   112,    78,    79,
      80,    81,    82,    83,    63,     2,     3,    68,   -52,    24,
      68,    74,    53,    54,     1,    41,    42,    43,    44,    45,
     116,   151,   122,   156,   113,    55,   158,    49,    50,    56,
     149,    84,    85,    57,     2,     3,   123,   153,   166,    92,
      25,    46,   126,   161,    21,    20,    34,   119,    86,   143,
     144,    55,   145,    65,    35,    20,   163,    47,   146,    57,
       2,     3,     2,     3,     4,     5,     6,     7,     8,     9,
     158,   127,   128,   129,   130,   131,   132,   126,   147,    21,
      20,   158,    21,    20,   159,    21,    20,    32,    21,    20,
      21,    20,   119,   133,   168,   162,   150,     2,     3,     4,
       5,     6,     7,     8,     9,    38,   127,   128,   129,   130,
     131,   132,    52,    53,    54,   114,   160,   120,    52,    53,
      54,    78,    79,    80,    81,    82,    83,   119,    52,    53,
      54,   114,     2,     3,   121,    51,   158,    17,     2,     3,
      89,    90,    91,    52,    53,    54,    66,    17,     2,     3,
     170,    72,    55,    73,    84,    85,    56,   125,    55,     0,
      57,   115,    56,     2,     3,     0,    57,   165,    55,   157,
       0,    71,    56,     0,     0,    75,    57,    77,    41,    42,
      43,    44,    45,    55,     0,     0,     0,    56,    49,    50,
       0,    57,    78,    79,    80,    81,    82,    83,    78,     0,
      80,    81,    82,    83,    46,     0,     0,   106,   107,   108,
     109,   110,    31,     0,     0,     1,   -52,    87,    88,    89,
      90,    91,     0,     1,     0,    84,    85,    97,     0,    96,
       0,    84,    85,   -52,    24,     2,     3,     4,     5,     6,
       7,     8,     9,     2,     3,     4,     5,     6,     7,     8,
       9,   -79,   -79,   -79,   -79,   -79,    41,    42,    43,    44,
      45,   -79,   -79,   164,     0,     0,   167,     0,     0,   169,
       0,     0,   171,     0,   172,     0,     0,   -79,     4,     5,
       6,     7,    46,     4,     5,     6,     7,     8,     9,    87,
      88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       0,     0,    24,    23,    24,    13,     0,     3,     4,     5,
      10,    10,    38,    13,    13,    38,    10,     3,     9,    10,
      11,    12,     9,    10,     3,     4,     5,    23,    24,    55,
      56,    51,    55,     3,    56,    38,    56,    23,    24,    39,
      39,     2,     3,    26,    23,    24,    26,    43,    48,    40,
      41,    51,    55,    40,    41,    51,    78,    79,    80,    81,
      82,    83,    84,    85,    43,     3,     4,     5,    47,    63,
      26,    38,    51,    44,    96,     3,    55,    52,     7,     8,
       9,    10,    11,    12,    51,    23,    24,    48,    55,    56,
      51,     3,     4,     5,     3,    13,    14,    15,    16,    17,
     122,   143,    38,   145,    38,    43,    38,    23,    24,    47,
     132,    40,    41,    51,    23,    24,    52,    55,   160,   113,
       3,    39,     3,    55,   124,   124,   134,    53,    57,    51,
      51,    43,    51,    36,   134,   134,   158,    55,    55,    51,
      23,    24,    23,    24,    25,    26,    27,    28,    29,    30,
      38,    32,    33,    34,    35,    36,    37,     3,    55,   159,
     159,    38,   162,   162,    52,   165,   165,    10,   168,   168,
     170,   170,    53,    54,    50,    52,    55,    23,    24,    25,
      26,    27,    28,    29,    30,    15,    32,    33,    34,    35,
      36,    37,     3,     4,     5,     6,   154,   112,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    53,     3,     4,
       5,     6,    23,    24,   113,    22,    38,     0,    23,    24,
      44,    45,    46,     3,     4,     5,    39,    10,    23,    24,
      52,    51,    43,    51,    40,    41,    47,   122,    43,    -1,
      51,    52,    47,    23,    24,    -1,    51,    52,    43,    55,
      -1,    51,    47,    -1,    -1,    55,    51,    57,    13,    14,
      15,    16,    17,    43,    -1,    -1,    -1,    47,    23,    24,
      -1,    51,     7,     8,     9,    10,    11,    12,     7,    -1,
       9,    10,    11,    12,    39,    -1,    -1,    87,    88,    89,
      90,    91,     0,    -1,    -1,     3,    38,    42,    43,    44,
      45,    46,    -1,     3,    -1,    40,    41,    52,    -1,    51,
      -1,    40,    41,    55,    56,    23,    24,    25,    26,    27,
      28,    29,    30,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    17,    13,    14,    15,    16,
      17,    23,    24,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,    -1,    -1,    39,    25,    26,
      27,    28,    39,    25,    26,    27,    28,    29,    30,    42,
      43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    23,    24,    25,    26,    27,    28,    29,    30,
      59,    60,    61,    62,    64,    65,    66,    77,    78,    79,
      83,    84,    85,    89,    56,     3,    85,    85,    26,    26,
      26,     0,    60,     3,    78,    84,    44,    63,    66,    38,
      55,    13,    14,    15,    16,    17,    39,    55,    86,    23,
      24,    86,     3,     4,     5,    43,    47,    51,    82,    83,
      84,    87,    88,    51,    55,    63,    79,    84,    85,     3,
      84,    87,    89,    90,     3,    87,    82,    87,     7,     8,
       9,    10,    11,    12,    40,    41,    57,    42,    43,    44,
      45,    46,    62,    67,    68,    69,    51,    52,    82,    82,
      82,    82,    82,    82,    82,    82,    87,    87,    87,    87,
      87,     3,    52,    38,     6,    52,    82,    91,    92,    53,
      71,    69,    38,    52,    72,    92,     3,    32,    33,    34,
      35,    36,    37,    54,    62,    70,    71,    73,    74,    75,
      76,    77,    90,    51,    51,    51,    55,    55,    55,    82,
      55,    81,    82,    55,    80,    81,    81,    55,    38,    52,
      80,    55,    52,    82,    70,    52,    81,    70,    50,    70,
      52,    70,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    68,    68,    69,    70,    70,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    77,    77,    77,    78,
      78,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    84,    84,    84,    84,    85,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    90,    90,
      91,    91,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     6,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     1,     0,     3,     1,     2,     1,     1,     3,
       2,     0,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     6,     7,     5,     7,     5,     3,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     4,     4,     3,
       3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 15: /* type_specifier: INT  */
#line 98 "parser.y"
                                       {current_dtype = INT;}
#line 1470 "y.tab.c"
    break;

  case 16: /* type_specifier: SHORT INT  */
#line 99 "parser.y"
                                       {current_dtype = SHORT;}
#line 1476 "y.tab.c"
    break;

  case 17: /* type_specifier: SHORT  */
#line 100 "parser.y"
                                       {current_dtype = SHORT;}
#line 1482 "y.tab.c"
    break;

  case 18: /* type_specifier: LONG  */
#line 101 "parser.y"
                                       {current_dtype = LONG;}
#line 1488 "y.tab.c"
    break;

  case 19: /* type_specifier: LONG INT  */
#line 102 "parser.y"
                                           {current_dtype = LONG;}
#line 1494 "y.tab.c"
    break;

  case 20: /* type_specifier: LONG_LONG  */
#line 103 "parser.y"
                                       {current_dtype = LONG_LONG;}
#line 1500 "y.tab.c"
    break;

  case 21: /* type_specifier: LONG_LONG INT  */
#line 104 "parser.y"
                                       {current_dtype = LONG_LONG;}
#line 1506 "y.tab.c"
    break;

  case 52: /* sub_decl: IDENTIFIER  */
#line 165 "parser.y"
                                    {(yyvsp[0].entry) -> data_type = current_dtype;}
#line 1512 "y.tab.c"
    break;

  case 56: /* expression: expression ',' sub_expr  */
#line 176 "parser.y"
                                                                                        {(yyval.dval) = (yyvsp[-2].dval),(yyvsp[0].dval);}
#line 1518 "y.tab.c"
    break;

  case 57: /* expression: sub_expr  */
#line 177 "parser.y"
                                                            {(yyval.dval) = (yyvsp[0].dval);}
#line 1524 "y.tab.c"
    break;

  case 58: /* sub_expr: sub_expr '>' sub_expr  */
#line 181 "parser.y"
                                                                        {(yyval.dval) = ((yyvsp[-2].dval) > (yyvsp[0].dval));}
#line 1530 "y.tab.c"
    break;

  case 59: /* sub_expr: sub_expr '<' sub_expr  */
#line 182 "parser.y"
                                                                        {(yyval.dval) = ((yyvsp[-2].dval) < (yyvsp[0].dval));}
#line 1536 "y.tab.c"
    break;

  case 60: /* sub_expr: sub_expr EQ sub_expr  */
#line 183 "parser.y"
                                                                        {(yyval.dval) = ((yyvsp[-2].dval) == (yyvsp[0].dval));}
#line 1542 "y.tab.c"
    break;

  case 61: /* sub_expr: sub_expr NOT_EQ sub_expr  */
#line 184 "parser.y"
                                                {(yyval.dval) = ((yyvsp[-2].dval) != (yyvsp[0].dval));}
#line 1548 "y.tab.c"
    break;

  case 62: /* sub_expr: sub_expr LS_EQ sub_expr  */
#line 185 "parser.y"
                                                {(yyval.dval) = ((yyvsp[-2].dval) <= (yyvsp[0].dval));}
#line 1554 "y.tab.c"
    break;

  case 63: /* sub_expr: sub_expr GR_EQ sub_expr  */
#line 186 "parser.y"
                                                {(yyval.dval) = ((yyvsp[-2].dval) >= (yyvsp[0].dval));}
#line 1560 "y.tab.c"
    break;

  case 64: /* sub_expr: sub_expr LOGICAL_AND sub_expr  */
#line 187 "parser.y"
                                                    {(yyval.dval) = ((yyvsp[-2].dval) && (yyvsp[0].dval));}
#line 1566 "y.tab.c"
    break;

  case 65: /* sub_expr: sub_expr LOGICAL_OR sub_expr  */
#line 188 "parser.y"
                                                    {(yyval.dval) = ((yyvsp[-2].dval) || (yyvsp[0].dval));}
#line 1572 "y.tab.c"
    break;

  case 66: /* sub_expr: '!' sub_expr  */
#line 189 "parser.y"
                                                    {(yyval.dval) = (!(yyvsp[0].dval));}
#line 1578 "y.tab.c"
    break;

  case 67: /* sub_expr: arithmetic_expr  */
#line 190 "parser.y"
                                                                                {(yyval.dval) = (yyvsp[0].dval);}
#line 1584 "y.tab.c"
    break;

  case 68: /* sub_expr: assignment_expr  */
#line 191 "parser.y"
                                                {(yyval.dval) = (yyvsp[0].dval);}
#line 1590 "y.tab.c"
    break;

  case 69: /* sub_expr: unary_expr  */
#line 192 "parser.y"
                                                    {(yyval.dval) = (yyvsp[0].dval);}
#line 1596 "y.tab.c"
    break;

  case 70: /* assignment_expr: lhs assign_op arithmetic_expr  */
#line 199 "parser.y"
                                                   {(yyval.dval) = (yyvsp[-2].entry)->value = Evaluate((yyvsp[-2].entry)->value,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 1602 "y.tab.c"
    break;

  case 71: /* assignment_expr: lhs assign_op array_index  */
#line 200 "parser.y"
                                                   {(yyval.dval) = 0;}
#line 1608 "y.tab.c"
    break;

  case 72: /* assignment_expr: lhs assign_op function_call  */
#line 201 "parser.y"
                                                   {(yyval.dval) = 0;}
#line 1614 "y.tab.c"
    break;

  case 73: /* assignment_expr: lhs assign_op unary_expr  */
#line 202 "parser.y"
                                                       {(yyval.dval) = (yyvsp[-2].entry)->value = Evaluate((yyvsp[-2].entry)->value,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 1620 "y.tab.c"
    break;

  case 74: /* assignment_expr: unary_expr assign_op unary_expr  */
#line 203 "parser.y"
                                                       {(yyval.dval) = 0;}
#line 1626 "y.tab.c"
    break;

  case 75: /* unary_expr: lhs INCREMENT  */
#line 206 "parser.y"
                                                       {(yyval.dval) = (yyvsp[-1].entry)->value = ((yyvsp[-1].entry)->value)++;}
#line 1632 "y.tab.c"
    break;

  case 76: /* unary_expr: lhs DECREMENT  */
#line 207 "parser.y"
                                                       {(yyval.dval) = (yyvsp[-1].entry)->value = ((yyvsp[-1].entry)->value)--;}
#line 1638 "y.tab.c"
    break;

  case 77: /* unary_expr: DECREMENT lhs  */
#line 208 "parser.y"
                                                       {(yyval.dval) = (yyvsp[0].entry)->value = --((yyvsp[0].entry)->value);}
#line 1644 "y.tab.c"
    break;

  case 78: /* unary_expr: INCREMENT lhs  */
#line 209 "parser.y"
                                                       {(yyval.dval) = (yyvsp[0].entry)->value = ++((yyvsp[0].entry)->value);}
#line 1650 "y.tab.c"
    break;

  case 79: /* lhs: IDENTIFIER  */
#line 211 "parser.y"
                                                   {(yyval.entry) = (yyvsp[0].entry); if(! (yyvsp[0].entry)->data_type) (yyvsp[0].entry)->data_type = current_dtype;}
#line 1656 "y.tab.c"
    break;

  case 80: /* assign_op: '='  */
#line 215 "parser.y"
                                                   {(yyval.ival) = '=';}
#line 1662 "y.tab.c"
    break;

  case 81: /* assign_op: ADD_ASSIGN  */
#line 216 "parser.y"
                                                   {(yyval.ival) = ADD_ASSIGN;}
#line 1668 "y.tab.c"
    break;

  case 82: /* assign_op: SUB_ASSIGN  */
#line 217 "parser.y"
                                                   {(yyval.ival) = SUB_ASSIGN;}
#line 1674 "y.tab.c"
    break;

  case 83: /* assign_op: MUL_ASSIGN  */
#line 218 "parser.y"
                                                   {(yyval.ival) = MUL_ASSIGN;}
#line 1680 "y.tab.c"
    break;

  case 84: /* assign_op: DIV_ASSIGN  */
#line 219 "parser.y"
                                                   {(yyval.ival) = DIV_ASSIGN;}
#line 1686 "y.tab.c"
    break;

  case 85: /* assign_op: MOD_ASSIGN  */
#line 220 "parser.y"
                                                   {(yyval.ival) = MOD_ASSIGN;}
#line 1692 "y.tab.c"
    break;

  case 86: /* arithmetic_expr: arithmetic_expr '+' arithmetic_expr  */
#line 223 "parser.y"
                                                        {(yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval);}
#line 1698 "y.tab.c"
    break;

  case 87: /* arithmetic_expr: arithmetic_expr '-' arithmetic_expr  */
#line 224 "parser.y"
                                                        {(yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval);}
#line 1704 "y.tab.c"
    break;

  case 88: /* arithmetic_expr: arithmetic_expr '*' arithmetic_expr  */
#line 225 "parser.y"
                                                        {(yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval);}
#line 1710 "y.tab.c"
    break;

  case 89: /* arithmetic_expr: arithmetic_expr '/' arithmetic_expr  */
#line 226 "parser.y"
                                                        {(yyval.dval) = ((yyvsp[0].dval) == 0) ? yyerror("Divide by 0!") : ((yyvsp[-2].dval) / (yyvsp[0].dval));}
#line 1716 "y.tab.c"
    break;

  case 90: /* arithmetic_expr: arithmetic_expr '%' arithmetic_expr  */
#line 227 "parser.y"
                                                            {(yyval.dval) = (int)(yyvsp[-2].dval) % (int)(yyvsp[0].dval);}
#line 1722 "y.tab.c"
    break;

  case 91: /* arithmetic_expr: '(' arithmetic_expr ')'  */
#line 228 "parser.y"
                                                            {(yyval.dval) = (yyvsp[-1].dval);}
#line 1728 "y.tab.c"
    break;

  case 92: /* arithmetic_expr: '-' arithmetic_expr  */
#line 229 "parser.y"
                                                        {(yyval.dval) = -(yyvsp[0].dval);}
#line 1734 "y.tab.c"
    break;

  case 93: /* arithmetic_expr: IDENTIFIER  */
#line 230 "parser.y"
                                                        {(yyval.dval) = (yyvsp[0].entry) -> value;}
#line 1740 "y.tab.c"
    break;

  case 94: /* arithmetic_expr: constant  */
#line 231 "parser.y"
                                                        {(yyval.dval) = (yyvsp[0].dval);}
#line 1746 "y.tab.c"
    break;

  case 95: /* constant: DEC_CONSTANT  */
#line 234 "parser.y"
                                                        {(yyval.dval) = (yyvsp[0].dval);}
#line 1752 "y.tab.c"
    break;

  case 96: /* constant: HEX_CONSTANT  */
#line 235 "parser.y"
                                                        {(yyval.dval) = (yyvsp[0].dval);}
#line 1758 "y.tab.c"
    break;


#line 1762 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 253 "parser.y"


#include "lex.yy.c"
#include <ctype.h>


double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
		case '=': return rhs_value;
		case ADD_ASSIGN: return (lhs_value + rhs_value);
		case SUB_ASSIGN: return (lhs_value - rhs_value);
		case MUL_ASSIGN: return (lhs_value * rhs_value);
		case DIV_ASSIGN: return (lhs_value / rhs_value);
		case MOD_ASSIGN: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(int argc, char *argv[])
{
	symbol_table = create_table();
	constant_table = create_table();

	yyin = fopen(argv[1], "r");

	if(!yyparse())
	{
		printf("\nParsing complete\n");
	}
	else
	{
			printf("\nParsing failed\n");
	}


	printf("\n\tSymbol table");
	display(symbol_table);


	fclose(yyin);
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
}
