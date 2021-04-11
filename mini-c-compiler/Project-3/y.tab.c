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
	int yyerror(char *msg);

	#include "symboltable.h"
	#include "lex.yy.c"

	#define SYMBOL_TABLE symbol_table_list[current_scope].symbol_table

  extern entry_t** constant_table;

	int current_dtype;

	table_t symbol_table_list[NUM_TABLES];

	int is_declaration = 0;
	int is_loop = 0;
	int is_func = 0;
	int func_type;

	int param_list[10];
	int p_idx = 0;
	int p=0;
    int rhs = 0;

	void type_check(int,int,int);

#line 100 "y.tab.c"

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
    CHAR_CONSTANT = 261,           /* CHAR_CONSTANT  */
    FLOAT_CONSTANT = 262,          /* FLOAT_CONSTANT  */
    STRING = 263,                  /* STRING  */
    LOGICAL_AND = 264,             /* LOGICAL_AND  */
    LOGICAL_OR = 265,              /* LOGICAL_OR  */
    LS_EQ = 266,                   /* LS_EQ  */
    GR_EQ = 267,                   /* GR_EQ  */
    EQ = 268,                      /* EQ  */
    NOT_EQ = 269,                  /* NOT_EQ  */
    MUL_ASSIGN = 270,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 271,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 272,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    INCREMENT = 275,               /* INCREMENT  */
    DECREMENT = 276,               /* DECREMENT  */
    SHORT = 277,                   /* SHORT  */
    INT = 278,                     /* INT  */
    LONG = 279,                    /* LONG  */
    LONG_LONG = 280,               /* LONG_LONG  */
    SIGNED = 281,                  /* SIGNED  */
    UNSIGNED = 282,                /* UNSIGNED  */
    CONST = 283,                   /* CONST  */
    VOID = 284,                    /* VOID  */
    CHAR = 285,                    /* CHAR  */
    FLOAT = 286,                   /* FLOAT  */
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
#define CHAR_CONSTANT 261
#define FLOAT_CONSTANT 262
#define STRING 263
#define LOGICAL_AND 264
#define LOGICAL_OR 265
#define LS_EQ 266
#define GR_EQ 267
#define EQ 268
#define NOT_EQ 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define INCREMENT 275
#define DECREMENT 276
#define SHORT 277
#define INT 278
#define LONG 279
#define LONG_LONG 280
#define SIGNED 281
#define UNSIGNED 282
#define CONST 283
#define VOID 284
#define CHAR 285
#define FLOAT 286
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
#line 31 "parser.y"

	int data_type;
	entry_t* entry;

#line 238 "y.tab.c"

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
  YYSYMBOL_CHAR_CONSTANT = 6,              /* CHAR_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 7,             /* FLOAT_CONSTANT  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_LOGICAL_AND = 9,                /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 10,                /* LOGICAL_OR  */
  YYSYMBOL_LS_EQ = 11,                     /* LS_EQ  */
  YYSYMBOL_GR_EQ = 12,                     /* GR_EQ  */
  YYSYMBOL_EQ = 13,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 14,                    /* NOT_EQ  */
  YYSYMBOL_MUL_ASSIGN = 15,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 16,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 17,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 18,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 19,                /* SUB_ASSIGN  */
  YYSYMBOL_INCREMENT = 20,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 21,                 /* DECREMENT  */
  YYSYMBOL_SHORT = 22,                     /* SHORT  */
  YYSYMBOL_INT = 23,                       /* INT  */
  YYSYMBOL_LONG = 24,                      /* LONG  */
  YYSYMBOL_LONG_LONG = 25,                 /* LONG_LONG  */
  YYSYMBOL_SIGNED = 26,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 27,                  /* UNSIGNED  */
  YYSYMBOL_CONST = 28,                     /* CONST  */
  YYSYMBOL_VOID = 29,                      /* VOID  */
  YYSYMBOL_CHAR = 30,                      /* CHAR  */
  YYSYMBOL_FLOAT = 31,                     /* FLOAT  */
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
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_type = 64,                      /* type  */
  YYSYMBOL_pointer = 65,                   /* pointer  */
  YYSYMBOL_data_type = 66,                 /* data_type  */
  YYSYMBOL_sign_specifier = 67,            /* sign_specifier  */
  YYSYMBOL_type_specifier = 68,            /* type_specifier  */
  YYSYMBOL_argument_list = 69,             /* argument_list  */
  YYSYMBOL_arguments = 70,                 /* arguments  */
  YYSYMBOL_arg = 71,                       /* arg  */
  YYSYMBOL_stmt = 72,                      /* stmt  */
  YYSYMBOL_compound_stmt = 73,             /* compound_stmt  */
  YYSYMBOL_74_3 = 74,                      /* $@3  */
  YYSYMBOL_statements = 75,                /* statements  */
  YYSYMBOL_single_stmt = 76,               /* single_stmt  */
  YYSYMBOL_for_block = 77,                 /* for_block  */
  YYSYMBOL_78_4 = 78,                      /* $@4  */
  YYSYMBOL_79_5 = 79,                      /* $@5  */
  YYSYMBOL_if_block = 80,                  /* if_block  */
  YYSYMBOL_while_block = 81,               /* while_block  */
  YYSYMBOL_82_6 = 82,                      /* $@6  */
  YYSYMBOL_declaration = 83,               /* declaration  */
  YYSYMBOL_declaration_list = 84,          /* declaration_list  */
  YYSYMBOL_sub_decl = 85,                  /* sub_decl  */
  YYSYMBOL_expression_stmt = 86,           /* expression_stmt  */
  YYSYMBOL_expression = 87,                /* expression  */
  YYSYMBOL_sub_expr = 88,                  /* sub_expr  */
  YYSYMBOL_assignment_expr = 89,           /* assignment_expr  */
  YYSYMBOL_unary_expr = 90,                /* unary_expr  */
  YYSYMBOL_lhs = 91,                       /* lhs  */
  YYSYMBOL_identifier = 92,                /* identifier  */
  YYSYMBOL_assign_op = 93,                 /* assign_op  */
  YYSYMBOL_arithmetic_expr = 94,           /* arithmetic_expr  */
  YYSYMBOL_constant = 95,                  /* constant  */
  YYSYMBOL_array_access = 96,              /* array_access  */
  YYSYMBOL_array_index = 97,               /* array_index  */
  YYSYMBOL_function_call = 98,             /* function_call  */
  YYSYMBOL_parameter_list = 99,            /* parameter_list  */
  YYSYMBOL_parameter = 100                 /* parameter  */
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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

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
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    87,    90,    91,    96,   102,    95,   116,
     118,   122,   123,   126,   127,   130,   131,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   148,   149,   152,
     153,   157,   161,   162,   167,   167,   177,   178,   182,   183,
     184,   185,   186,   187,   196,   197,   199,   209,   209,   210,
     210,   213,   214,   217,   217,   220,   222,   223,   226,   227,
     230,   231,   232,   236,   237,   240,   241,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   261,
     262,   263,   264,   265,   268,   269,   270,   271,   273,   274,
     277,   293,   294,   295,   296,   297,   298,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   312,   313,   314,   315,
     318,   349,   350,   353,   359,   367,   368,   371,   372
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
  "DEC_CONSTANT", "HEX_CONSTANT", "CHAR_CONSTANT", "FLOAT_CONSTANT",
  "STRING", "LOGICAL_AND", "LOGICAL_OR", "LS_EQ", "GR_EQ", "EQ", "NOT_EQ",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "INCREMENT", "DECREMENT", "SHORT", "INT", "LONG", "LONG_LONG", "SIGNED",
  "UNSIGNED", "CONST", "VOID", "CHAR", "FLOAT", "IF", "FOR", "WHILE",
  "CONTINUE", "BREAK", "RETURN", "','", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "LOWER_THAN_ELSE", "ELSE", "'('",
  "')'", "'{'", "'}'", "';'", "'['", "']'", "$accept", "starter",
  "builder", "function", "$@1", "$@2", "type", "pointer", "data_type",
  "sign_specifier", "type_specifier", "argument_list", "arguments", "arg",
  "stmt", "compound_stmt", "$@3", "statements", "single_stmt", "for_block",
  "$@4", "$@5", "if_block", "while_block", "$@6", "declaration",
  "declaration_list", "sub_decl", "expression_stmt", "expression",
  "sub_expr", "assignment_expr", "unary_expr", "lhs", "identifier",
  "assign_op", "arithmetic_expr", "constant", "array_access",
  "array_index", "function_call", "parameter_list", "parameter", YY_NULLPTR
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

#define YYPACT_NINF (-27)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     416,   -27,    31,    31,    32,   -27,    44,    45,   -27,   -27,
     -27,   -27,   -27,   404,   -27,   -27,    37,    -5,   436,   -27,
     -27,   -13,   -27,   -27,   342,   225,   119,    86,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,    99,   225,   317,    -5,   -27,
     -27,    37,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
      37,   100,   -27,   -27,    72,   -27,     9,   -27,   -27,   -27,
      16,   -27,   -27,   -27,   -27,     2,     2,   -27,     8,   203,
     -27,   -27,   -27,   -27,   -27,    13,   426,   -27,   -27,   366,
     271,     2,     2,     2,     2,     2,   -27,    31,    19,    59,
     -27,   -27,   -27,   305,   -27,   376,   -27,   225,   315,   203,
     -27,   -26,   -27,   -14,   -14,   -27,   -27,   -27,   -27,   -27,
     426,   -27,   305,   305,   305,   305,   305,   305,   305,   305,
     296,   -27,    64,   -27,     7,   382,   -27,   -27,     3,     3,
     -27,   -27,   -27,   -27,   -27,   -27,   201,    68,    71,    77,
      98,   104,    95,   -27,    37,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   324,   109,   305,   105,   305,   -27,   -27,   -27,
     121,   -27,    34,   376,   -27,   105,   127,    75,   -27,   305,
     236,   277,   -27,   -27,   376,    73,   -27,   111,   236,   236,
     236,   -27,   -27,   -27,   -27,   236,   -27
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    90,     0,     0,    19,    17,    20,    22,    15,    16,
      26,    24,    25,     0,     3,     4,     0,    10,     0,    14,
       5,     0,    59,    60,     0,     0,    88,    89,    87,    86,
      18,    21,    23,     1,     2,     0,     0,    88,    12,     9,
      13,     0,    56,    94,    95,    96,    92,    93,    91,    57,
       0,     0,    84,    85,     0,    55,     0,    11,    58,    83,
       0,   106,   107,   108,   109,     0,     0,    82,   104,    79,
     105,    80,    81,   112,   111,     0,    28,   104,   103,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,    27,
      30,   102,   118,     0,   114,   117,    77,    78,   104,    76,
      89,     0,   116,    97,    98,    99,   100,   101,    31,     7,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,    29,    73,    74,    71,    72,    69,    70,
      68,    67,   115,    34,     8,    37,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    36,    32,    33,    39,    38,
      40,    41,    88,     0,     0,     0,     0,    44,    45,    43,
       0,    42,     0,    66,    64,     0,     0,     0,    46,     0,
       0,     0,    63,    53,    65,    51,    47,     0,     0,     0,
       0,    49,    54,    52,    48,     0,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,   154,   -27,   -27,   -27,     4,   130,   -27,   -27,
     165,   -27,   -27,    62,   235,    65,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,    10,   -15,   143,    21,    17,
     -24,    33,    11,   -27,     0,   168,   318,   140,    22,   -27,
     144,   -27,    78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    13,    14,    15,    56,   122,   144,    39,    17,    18,
      19,    88,    89,    90,   145,   146,   135,   136,   147,   148,
     180,   185,   149,   150,   178,   151,    21,    22,   165,   166,
     163,    96,    97,    25,    98,    50,    99,    70,   100,    75,
     153,   101,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    35,    28,    29,    16,     1,    61,    62,    63,    64,
      20,    24,   120,    26,   114,   115,    37,    16,   114,   115,
     116,   117,    27,    20,    24,    41,   121,    36,    52,    53,
      83,    84,    85,    23,     1,    27,    52,    53,    27,    38,
       1,    26,    42,   118,   119,    65,    23,   118,   119,    23,
      60,    68,    36,    66,    73,    30,    95,     2,     3,    80,
      76,    59,    67,    27,    54,    77,    77,    31,    32,   111,
      86,   109,   169,    71,    23,     1,    61,    62,    63,    64,
      87,    77,    77,    77,    77,    77,   170,   108,   124,   125,
     126,   127,   128,   129,   130,   131,    95,   110,     1,    61,
      62,    63,    64,     1,    61,    62,    63,    64,     1,    61,
      62,    63,    64,   169,    87,     2,     3,   133,   160,   154,
       2,     3,   155,   179,   -62,     2,     3,   173,   156,    35,
     112,   113,   114,   115,   116,   117,   152,    41,    65,    52,
      53,   -62,    93,    65,    26,   174,    66,    24,    65,   169,
     159,    66,    93,   157,    55,    36,    66,   -61,    27,   158,
     164,   118,   119,   181,   161,   169,    27,    34,    57,    23,
     152,   162,   123,   167,   -61,    54,   168,    23,   152,   152,
     152,    24,   172,    40,    58,   152,   171,   134,   177,    24,
      24,    24,    27,    51,    74,    72,    24,     0,   132,     0,
      27,    27,    27,    23,     1,     0,     0,    27,     0,     0,
       0,    23,    23,    23,     0,     0,     0,     0,    23,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,     0,
      10,    11,    12,   137,   138,   139,   140,   141,   142,     1,
      43,    44,    45,    46,    47,    81,    82,    83,    84,    85,
       0,     0,     0,     0,   133,   143,     2,     3,     4,     5,
       6,     7,     8,     9,    48,    10,    11,    12,   137,   138,
     139,   140,   141,   142,     1,    61,    62,    63,    64,    92,
       1,    61,    62,    63,    64,     0,     0,     0,     0,   133,
       0,     2,     3,     0,     0,     0,     0,     2,     3,     1,
      61,    62,    63,    64,    92,     0,     0,     0,     1,    61,
      62,    63,    64,     0,    65,     0,     2,     3,    93,     0,
      65,     0,    66,    94,    93,     2,     3,     0,    66,   176,
     -88,   -88,   -88,   -88,   -88,    52,    53,    52,    53,    65,
       0,     0,     0,    93,    52,    53,     0,    66,    65,     0,
       0,     0,    93,     0,   -88,   -61,    66,    43,    44,    45,
      46,    47,   -61,     0,     0,     0,     0,     0,    -6,    69,
       0,    54,   -61,    54,     0,    80,     0,     0,     0,   -61,
      54,    48,     0,    78,    79,   112,   113,   114,   115,   116,
     117,   112,     0,   114,   115,   116,   117,    49,     0,   103,
     104,   105,   106,   107,    33,   175,     0,     1,    81,    82,
      83,    84,    85,   182,   183,   184,   118,   119,    91,     1,
     186,     0,   118,   119,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    10,    11,    12,     2,     3,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     4,     5,
       6,     7,     0,     0,     0,    10,    11,    12
};

static const yytype_int16 yycheck[] =
{
       0,    16,     2,     3,     0,     3,     4,     5,     6,     7,
       0,     0,    38,    13,    11,    12,    16,    13,    11,    12,
      13,    14,     0,    13,    13,    38,    52,    16,    20,    21,
      44,    45,    46,     0,     3,    13,    20,    21,    16,    44,
       3,    41,    55,    40,    41,    43,    13,    40,    41,    16,
      50,    51,    41,    51,    54,    23,    80,    20,    21,    51,
      51,    50,    51,    41,    56,    65,    66,    23,    23,    93,
      57,    52,    38,    51,    41,     3,     4,     5,     6,     7,
      76,    81,    82,    83,    84,    85,    52,    87,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    38,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    38,   110,    20,    21,    53,   142,    51,
      20,    21,    51,    50,    38,    20,    21,    52,    51,   144,
       9,    10,    11,    12,    13,    14,   136,    38,    43,    20,
      21,    55,    47,    43,   144,   169,    51,   136,    43,    38,
      55,    51,    47,    55,    55,   144,    51,    38,   136,    55,
      55,    40,    41,    52,    55,    38,   144,    13,    38,   136,
     170,   154,   110,   156,    55,    56,    55,   144,   178,   179,
     180,   170,    55,    18,    41,   185,   165,   122,   171,   178,
     179,   180,   170,    25,    54,    51,   185,    -1,   120,    -1,
     178,   179,   180,   170,     3,    -1,    -1,   185,    -1,    -1,
      -1,   178,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,     3,
      15,    16,    17,    18,    19,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    53,    54,    20,    21,    22,    23,
      24,    25,    26,    27,    39,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    53,
      -1,    20,    21,    -1,    -1,    -1,    -1,    20,    21,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    43,    -1,    20,    21,    47,    -1,
      43,    -1,    51,    52,    47,    20,    21,    -1,    51,    52,
      15,    16,    17,    18,    19,    20,    21,    20,    21,    43,
      -1,    -1,    -1,    47,    20,    21,    -1,    51,    43,    -1,
      -1,    -1,    47,    -1,    39,    38,    51,    15,    16,    17,
      18,    19,    38,    -1,    -1,    -1,    -1,    -1,    51,    51,
      -1,    56,    55,    56,    -1,    51,    -1,    -1,    -1,    55,
      56,    39,    -1,    65,    66,     9,    10,    11,    12,    13,
      14,     9,    -1,    11,    12,    13,    14,    55,    -1,    81,
      82,    83,    84,    85,     0,   170,    -1,     3,    42,    43,
      44,    45,    46,   178,   179,   180,    40,    41,    52,     3,
     185,    -1,    40,    41,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    22,    23,
      24,    25,    -1,    -1,    -1,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    20,    21,    22,    23,    24,    25,    26,    27,
      29,    30,    31,    59,    60,    61,    64,    66,    67,    68,
      83,    84,    85,    89,    90,    91,    92,    96,    92,    92,
      23,    23,    23,     0,    60,    84,    90,    92,    44,    65,
      68,    38,    55,    15,    16,    17,    18,    19,    39,    55,
      93,    93,    20,    21,    56,    55,    62,    65,    85,    90,
      92,     4,     5,     6,     7,    43,    51,    90,    92,    94,
      95,    96,    98,    92,    95,    97,    51,    92,    94,    94,
      51,    42,    43,    44,    45,    46,    57,    64,    69,    70,
      71,    52,     8,    47,    52,    88,    89,    90,    92,    94,
      96,    99,   100,    94,    94,    94,    94,    94,    92,    52,
      38,    88,     9,    10,    11,    12,    13,    14,    40,    41,
      38,    52,    63,    71,    88,    88,    88,    88,    88,    88,
      88,    88,   100,    53,    73,    74,    75,    32,    33,    34,
      35,    36,    37,    54,    64,    72,    73,    76,    77,    80,
      81,    83,    92,    98,    51,    51,    51,    55,    55,    55,
      88,    55,    87,    88,    55,    86,    87,    87,    55,    38,
      52,    86,    55,    52,    88,    72,    52,    87,    82,    50,
      78,    52,    72,    72,    72,    79,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    62,    63,    61,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    72,    72,    74,    73,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    78,    77,    79,
      77,    80,    80,    82,    81,    83,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    97,    97,    98,    98,    99,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     0,     0,     8,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     0,     3,
       1,     2,     1,     1,     0,     4,     2,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     0,     7,     0,
       8,     5,     7,     0,     6,     3,     2,     2,     3,     1,
       1,     1,     1,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     4,     3,     3,     1,     1,     1
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
  case 6: /* $@1: %empty  */
#line 96 "parser.y"
                                                                                                                                        {
																						func_type = current_dtype;
																						is_declaration = 0;
																						current_scope = create_new_scope();
																					}
#line 1523 "y.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 102 "parser.y"
                                                                                                {
																						is_declaration = 0;
																						fill_parameter_list((yyvsp[-4].entry),param_list,p_idx);
																						p_idx = 0;
																						is_func = 1;
																						p=1;
																					}
#line 1535 "y.tab.c"
    break;

  case 8: /* function: type identifier $@1 '(' argument_list ')' $@2 compound_stmt  */
#line 110 "parser.y"
                                                                                                                                {
																						is_func = 0;
																					}
#line 1543 "y.tab.c"
    break;

  case 9: /* type: data_type pointer  */
#line 117 "parser.y"
     {is_declaration = 1; }
#line 1549 "y.tab.c"
    break;

  case 10: /* type: data_type  */
#line 119 "parser.y"
     {is_declaration = 1; }
#line 1555 "y.tab.c"
    break;

  case 17: /* type_specifier: INT  */
#line 134 "parser.y"
                                       {current_dtype = INT;}
#line 1561 "y.tab.c"
    break;

  case 18: /* type_specifier: SHORT INT  */
#line 135 "parser.y"
                                       {current_dtype = SHORT;}
#line 1567 "y.tab.c"
    break;

  case 19: /* type_specifier: SHORT  */
#line 136 "parser.y"
                                       {current_dtype = SHORT;}
#line 1573 "y.tab.c"
    break;

  case 20: /* type_specifier: LONG  */
#line 137 "parser.y"
                                       {current_dtype = LONG;}
#line 1579 "y.tab.c"
    break;

  case 21: /* type_specifier: LONG INT  */
#line 138 "parser.y"
                                                   {current_dtype = LONG;}
#line 1585 "y.tab.c"
    break;

  case 22: /* type_specifier: LONG_LONG  */
#line 139 "parser.y"
                                       {current_dtype = LONG_LONG;}
#line 1591 "y.tab.c"
    break;

  case 23: /* type_specifier: LONG_LONG INT  */
#line 140 "parser.y"
                                       {current_dtype = LONG_LONG;}
#line 1597 "y.tab.c"
    break;

  case 24: /* type_specifier: CHAR  */
#line 141 "parser.y"
                                                                                                                                 {current_dtype = CHAR;}
#line 1603 "y.tab.c"
    break;

  case 25: /* type_specifier: FLOAT  */
#line 142 "parser.y"
                                                                                                                                 {current_dtype = FLOAT;}
#line 1609 "y.tab.c"
    break;

  case 26: /* type_specifier: VOID  */
#line 143 "parser.y"
                                                                                                                                         {current_dtype = VOID;}
#line 1615 "y.tab.c"
    break;

  case 31: /* arg: type identifier  */
#line 157 "parser.y"
                                                                                        {param_list[p_idx++] = (yyvsp[0].entry)->data_type;}
#line 1621 "y.tab.c"
    break;

  case 34: /* $@3: %empty  */
#line 167 "parser.y"
                                                                                                                {
																		if(!p)current_scope = create_new_scope();
																		else p = 0;
																}
#line 1630 "y.tab.c"
    break;

  case 35: /* compound_stmt: '{' $@3 statements '}'  */
#line 174 "parser.y"
                                                                                                        {current_scope = exit_scope();}
#line 1636 "y.tab.c"
    break;

  case 43: /* single_stmt: RETURN ';'  */
#line 187 "parser.y"
                                                                                          {
																	if(is_func)
																	{
																		if(func_type != VOID)
																			yyerror("return type (VOID) does not match function type");
																	}
																  else yyerror("return statement not inside function definition");
																}
#line 1649 "y.tab.c"
    break;

  case 44: /* single_stmt: CONTINUE ';'  */
#line 196 "parser.y"
                                                                                 {if(!is_loop) {yyerror("Illegal use of continue");}}
#line 1655 "y.tab.c"
    break;

  case 45: /* single_stmt: BREAK ';'  */
#line 197 "parser.y"
                                           {if(!is_loop) {yyerror("Illegal use of break");}}
#line 1661 "y.tab.c"
    break;

  case 46: /* single_stmt: RETURN sub_expr ';'  */
#line 199 "parser.y"
                                                         {
																	if(is_func)
																	{
																		if(func_type != (yyvsp[-1].data_type))
																			yyerror("return type does not match function type");
																	}
																	else yyerror("return statement not in function definition");
															 }
#line 1674 "y.tab.c"
    break;

  case 47: /* $@4: %empty  */
#line 209 "parser.y"
                                                       {is_loop = 1;}
#line 1680 "y.tab.c"
    break;

  case 48: /* for_block: FOR '(' expression_stmt expression_stmt ')' $@4 stmt  */
#line 209 "parser.y"
                                                                           {is_loop = 0;}
#line 1686 "y.tab.c"
    break;

  case 49: /* $@5: %empty  */
#line 210 "parser.y"
                                                                         {is_loop = 1;}
#line 1692 "y.tab.c"
    break;

  case 50: /* for_block: FOR '(' expression_stmt expression_stmt expression ')' $@5 stmt  */
#line 210 "parser.y"
                                                                                             {is_loop = 0;}
#line 1698 "y.tab.c"
    break;

  case 53: /* $@6: %empty  */
#line 217 "parser.y"
                                            {is_loop = 1;}
#line 1704 "y.tab.c"
    break;

  case 54: /* while_block: WHILE '(' expression ')' $@6 stmt  */
#line 217 "parser.y"
                                                                {is_loop = 0;}
#line 1710 "y.tab.c"
    break;

  case 55: /* declaration: type declaration_list ';'  */
#line 221 "parser.y"
           {is_declaration = 0; }
#line 1716 "y.tab.c"
    break;

  case 67: /* sub_expr: sub_expr '>' sub_expr  */
#line 245 "parser.y"
                                                                                                                                                  {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1722 "y.tab.c"
    break;

  case 68: /* sub_expr: sub_expr '<' sub_expr  */
#line 246 "parser.y"
                                                                                                                                                {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1728 "y.tab.c"
    break;

  case 69: /* sub_expr: sub_expr EQ sub_expr  */
#line 247 "parser.y"
                                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1734 "y.tab.c"
    break;

  case 70: /* sub_expr: sub_expr NOT_EQ sub_expr  */
#line 248 "parser.y"
                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1740 "y.tab.c"
    break;

  case 71: /* sub_expr: sub_expr LS_EQ sub_expr  */
#line 249 "parser.y"
                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1746 "y.tab.c"
    break;

  case 72: /* sub_expr: sub_expr GR_EQ sub_expr  */
#line 250 "parser.y"
                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1752 "y.tab.c"
    break;

  case 73: /* sub_expr: sub_expr LOGICAL_AND sub_expr  */
#line 251 "parser.y"
                                                                                                                                {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1758 "y.tab.c"
    break;

  case 74: /* sub_expr: sub_expr LOGICAL_OR sub_expr  */
#line 252 "parser.y"
                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),2); (yyval.data_type) = (yyvsp[-2].data_type);}
#line 1764 "y.tab.c"
    break;

  case 75: /* sub_expr: '!' sub_expr  */
#line 253 "parser.y"
                                                                                                                                                                                        {(yyval.data_type) = (yyvsp[0].data_type);}
#line 1770 "y.tab.c"
    break;

  case 76: /* sub_expr: arithmetic_expr  */
#line 254 "parser.y"
                                                                                                                                                                                {(yyval.data_type) = (yyvsp[0].data_type);}
#line 1776 "y.tab.c"
    break;

  case 77: /* sub_expr: assignment_expr  */
#line 255 "parser.y"
                                                                                                                                                                {(yyval.data_type) = (yyvsp[0].data_type);}
#line 1782 "y.tab.c"
    break;

  case 78: /* sub_expr: unary_expr  */
#line 256 "parser.y"
                                                                                                                                                                                                {(yyval.data_type) = (yyvsp[0].data_type);}
#line 1788 "y.tab.c"
    break;

  case 79: /* assignment_expr: lhs assign_op arithmetic_expr  */
#line 261 "parser.y"
                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),1); (yyval.data_type) = (yyvsp[0].data_type); rhs=0;}
#line 1794 "y.tab.c"
    break;

  case 80: /* assignment_expr: lhs assign_op array_access  */
#line 262 "parser.y"
                                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),1); (yyval.data_type) = (yyvsp[0].data_type);rhs=0;}
#line 1800 "y.tab.c"
    break;

  case 81: /* assignment_expr: lhs assign_op function_call  */
#line 263 "parser.y"
                                                                                                                                {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),1); (yyval.data_type) = (yyvsp[0].data_type);rhs=0;}
#line 1806 "y.tab.c"
    break;

  case 82: /* assignment_expr: lhs assign_op unary_expr  */
#line 264 "parser.y"
                                                                                    {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),1); (yyval.data_type) = (yyvsp[0].data_type);rhs=0;}
#line 1812 "y.tab.c"
    break;

  case 83: /* assignment_expr: unary_expr assign_op unary_expr  */
#line 265 "parser.y"
                                                                                                                                {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),1); (yyval.data_type) = (yyvsp[0].data_type);rhs=0;}
#line 1818 "y.tab.c"
    break;

  case 84: /* unary_expr: identifier INCREMENT  */
#line 268 "parser.y"
                                                                                                                                {(yyval.data_type) = (yyvsp[-1].entry)->data_type;}
#line 1824 "y.tab.c"
    break;

  case 85: /* unary_expr: identifier DECREMENT  */
#line 269 "parser.y"
                                                                                                                                                        {(yyval.data_type) = (yyvsp[-1].entry)->data_type;}
#line 1830 "y.tab.c"
    break;

  case 86: /* unary_expr: DECREMENT identifier  */
#line 270 "parser.y"
                                                                                                                                                        {(yyval.data_type) = (yyvsp[0].entry)->data_type;}
#line 1836 "y.tab.c"
    break;

  case 87: /* unary_expr: INCREMENT identifier  */
#line 271 "parser.y"
                                                                                                                                                        {(yyval.data_type) = (yyvsp[0].entry)->data_type;}
#line 1842 "y.tab.c"
    break;

  case 88: /* lhs: identifier  */
#line 273 "parser.y"
                                                                                                                                                                                {(yyval.data_type) = (yyvsp[0].entry)->data_type;}
#line 1848 "y.tab.c"
    break;

  case 89: /* lhs: array_access  */
#line 274 "parser.y"
                                                                                                                                                                                {(yyval.data_type) = (yyvsp[0].data_type);}
#line 1854 "y.tab.c"
    break;

  case 90: /* identifier: IDENTIFIER  */
#line 277 "parser.y"
                                                         {
                                                                    if(is_declaration
                                                                    && !rhs) 
                                                                    {
                                                                        (yyvsp[0].entry) = insert(SYMBOL_TABLE,yytext,INT_MAX,current_dtype);
                                                                        if((yyvsp[0].entry) == NULL) yyerror("Redeclaration of variable");
                                                                    }
                                                                    else
                                                                    {
                                                                        (yyvsp[0].entry) = search_recursive(yytext);
                                                                        if((yyvsp[0].entry) == NULL) yyerror("Variable not declared");
                                                                    }
                                                                    (yyval.entry) = (yyvsp[0].entry);
                                                            }
#line 1873 "y.tab.c"
    break;

  case 91: /* assign_op: '='  */
#line 293 "parser.y"
              {rhs=1;}
#line 1879 "y.tab.c"
    break;

  case 92: /* assign_op: ADD_ASSIGN  */
#line 294 "parser.y"
                {rhs=1;}
#line 1885 "y.tab.c"
    break;

  case 93: /* assign_op: SUB_ASSIGN  */
#line 295 "parser.y"
                {rhs=1;}
#line 1891 "y.tab.c"
    break;

  case 94: /* assign_op: MUL_ASSIGN  */
#line 296 "parser.y"
                {rhs=1;}
#line 1897 "y.tab.c"
    break;

  case 95: /* assign_op: DIV_ASSIGN  */
#line 297 "parser.y"
                {rhs=1;}
#line 1903 "y.tab.c"
    break;

  case 96: /* assign_op: MOD_ASSIGN  */
#line 298 "parser.y"
                {rhs=1;}
#line 1909 "y.tab.c"
    break;

  case 97: /* arithmetic_expr: arithmetic_expr '+' arithmetic_expr  */
#line 301 "parser.y"
                                                                                {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),0);}
#line 1915 "y.tab.c"
    break;

  case 98: /* arithmetic_expr: arithmetic_expr '-' arithmetic_expr  */
#line 302 "parser.y"
                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),0);}
#line 1921 "y.tab.c"
    break;

  case 99: /* arithmetic_expr: arithmetic_expr '*' arithmetic_expr  */
#line 303 "parser.y"
                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),0);}
#line 1927 "y.tab.c"
    break;

  case 100: /* arithmetic_expr: arithmetic_expr '/' arithmetic_expr  */
#line 304 "parser.y"
                                                                                                                        {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),0);}
#line 1933 "y.tab.c"
    break;

  case 101: /* arithmetic_expr: arithmetic_expr '%' arithmetic_expr  */
#line 305 "parser.y"
                                                                                                                                {type_check((yyvsp[-2].data_type),(yyvsp[0].data_type),0);}
#line 1939 "y.tab.c"
    break;

  case 102: /* arithmetic_expr: '(' arithmetic_expr ')'  */
#line 306 "parser.y"
                                                                                                                                                                        {(yyval.data_type) = (yyvsp[-1].data_type);}
#line 1945 "y.tab.c"
    break;

  case 103: /* arithmetic_expr: '-' arithmetic_expr  */
#line 307 "parser.y"
                                                                                                                                {(yyval.data_type) = (yyvsp[0].data_type);}
#line 1951 "y.tab.c"
    break;

  case 104: /* arithmetic_expr: identifier  */
#line 308 "parser.y"
                                                                                                                                                                                                {(yyval.data_type) = (yyvsp[0].entry)->data_type;}
#line 1957 "y.tab.c"
    break;

  case 105: /* arithmetic_expr: constant  */
#line 309 "parser.y"
                                                                                                                                                                                                        {(yyval.data_type) = (yyvsp[0].entry)->data_type;}
#line 1963 "y.tab.c"
    break;

  case 106: /* constant: DEC_CONSTANT  */
#line 312 "parser.y"
                                                                                                                {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 1969 "y.tab.c"
    break;

  case 107: /* constant: HEX_CONSTANT  */
#line 313 "parser.y"
                                                                                                                                {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 1975 "y.tab.c"
    break;

  case 108: /* constant: CHAR_CONSTANT  */
#line 314 "parser.y"
                                                                                                                                        {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 1981 "y.tab.c"
    break;

  case 109: /* constant: FLOAT_CONSTANT  */
#line 315 "parser.y"
                                                                                                                                        {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 1987 "y.tab.c"
    break;

  case 110: /* array_access: identifier '[' array_index ']'  */
#line 318 "parser.y"
                                                                                                        {
																															if(is_declaration)
																															{
																																if((yyvsp[-1].entry)->value <= 0)
																																	yyerror("size of array is not positive");

																																else
                                                                                                                                if((yyvsp[-1].entry)->is_constant && !rhs)
																																	(yyvsp[-3].entry)->array_dimension = (yyvsp[-1].entry)->value;
																																	else if(rhs){
																																	{
																																if((yyvsp[-1].entry)->value > (yyvsp[-3].entry)->array_dimension)
																																	yyerror("Array index out of bound");

																																if((yyvsp[-1].entry)->value < 0)
																																	yyerror("Array index cannot be negative");
																															}
																															}
																															}

																															else if((yyvsp[-1].entry)->is_constant)
																															{
																																if((yyvsp[-1].entry)->value > (yyvsp[-3].entry)->array_dimension)
																																	yyerror("Array index out of bound");

																																if((yyvsp[-1].entry)->value < 0)
																																	yyerror("Array index cannot be negative");
																															}
																															(yyval.data_type) = (yyvsp[-3].entry)->data_type;
																														}
#line 2022 "y.tab.c"
    break;

  case 111: /* array_index: constant  */
#line 349 "parser.y"
                                                                                                                                                                {(yyval.entry) = (yyvsp[0].entry);}
#line 2028 "y.tab.c"
    break;

  case 112: /* array_index: identifier  */
#line 350 "parser.y"
                                                                                                                                                                                        {(yyval.entry) = (yyvsp[0].entry);}
#line 2034 "y.tab.c"
    break;

  case 113: /* function_call: identifier '(' parameter_list ')'  */
#line 353 "parser.y"
                                                                                {
																													(yyval.data_type) = (yyvsp[-3].entry)->data_type;
																													check_parameter_list((yyvsp[-3].entry),param_list,p_idx);
																													p_idx = 0;
																												}
#line 2044 "y.tab.c"
    break;

  case 114: /* function_call: identifier '(' ')'  */
#line 359 "parser.y"
                                                                                                                                {
							 																						 (yyval.data_type) = (yyvsp[-2].entry)->data_type;
																													 check_parameter_list((yyvsp[-2].entry),param_list,p_idx);
																													 p_idx = 0;
																												}
#line 2054 "y.tab.c"
    break;

  case 117: /* parameter: sub_expr  */
#line 371 "parser.y"
                                                                                                                                                                        {param_list[p_idx++] = (yyvsp[0].data_type);}
#line 2060 "y.tab.c"
    break;

  case 118: /* parameter: STRING  */
#line 372 "parser.y"
                                                                                                                                                                                                        {param_list[p_idx++] = STRING;}
#line 2066 "y.tab.c"
    break;


#line 2070 "y.tab.c"

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

#line 374 "parser.y"


void type_check(int left, int right, int flag)
{
	if(left != right)
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

int main(int argc, char *argv[])
{
	 int i;
	 for(i=0; i<NUM_TABLES;i++)
	 {
	  symbol_table_list[i].symbol_table = NULL;
	  symbol_table_list[i].parent = -1;
	 }

	constant_table = create_table();
  symbol_table_list[0].symbol_table = create_table();
	yyin = fopen(argv[1], "r");

	if(!yyparse())
	{
		printf("\nPARSING COMPLETE\n\n\n");
	}
	else
	{
			printf("\nPARSING FAILED!\n\n\n");
	}


	printf("SYMBOL TABLES\n\n");
	display_all();

	printf("CONSTANT TABLE");
	display_constant_table(constant_table);


	fclose(yyin);
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	exit(0);
}
