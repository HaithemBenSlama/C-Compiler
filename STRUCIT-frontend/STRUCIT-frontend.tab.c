/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "STRUCIT-frontend.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void yyerror(const char *str) {
        fprintf(stderr,"error: %s\n",str);
}
 
int yywrap() {
        return 1;
}

#line 84 "STRUCIT-frontend.tab.c"

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

#include "STRUCIT-frontend.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_ARROW = 6,                      /* ARROW  */
  YYSYMBOL_LESS_THAN_EQUAL = 7,            /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 8,         /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 9,                      /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 10,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_THAN = 11,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 12,              /* GREATER_THAN  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_DIV_ASSIGN = 15,                /* DIV_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 16,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 17,                /* SUB_ASSIGN  */
  YYSYMBOL_EXTERN = 18,                    /* EXTERN  */
  YYSYMBOL_INT = 19,                       /* INT  */
  YYSYMBOL_VOID = 20,                      /* VOID  */
  YYSYMBOL_STRUCT = 21,                    /* STRUCT  */
  YYSYMBOL_SIZEOF = 22,                    /* SIZEOF  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_LEFT_PAREN = 28,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 29,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_BRACE = 30,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 31,               /* RIGHT_BRACE  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 33,                 /* SEMICOLON  */
  YYSYMBOL_ADDRESS = 34,                   /* ADDRESS  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_ASSIGN = 36,                    /* ASSIGN  */
  YYSYMBOL_DIVIDE = 37,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 38,                  /* MULTIPLY  */
  YYSYMBOL_MINUS = 39,                     /* MINUS  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_primary_expression = 41,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 42,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 43,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 44,          /* unary_expression  */
  YYSYMBOL_unary_operator = 45,            /* unary_operator  */
  YYSYMBOL_cast_expression = 46,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 47, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 48,       /* additive_expression  */
  YYSYMBOL_relational_expression = 49,     /* relational_expression  */
  YYSYMBOL_equality_expression = 50,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 51,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 52,     /* logical_or_expression  */
  YYSYMBOL_assignment_expression = 53,     /* assignment_expression  */
  YYSYMBOL_if_expression = 54,             /* if_expression  */
  YYSYMBOL_assignment_operator = 55,       /* assignment_operator  */
  YYSYMBOL_expression = 56,                /* expression  */
  YYSYMBOL_declaration = 57,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 58,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 59,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 60,           /* init_declarator  */
  YYSYMBOL_type_specifier = 61,            /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 62, /* struct_or_union_specifier  */
  YYSYMBOL_struct_declaration_list = 63,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 64,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 65,  /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 66,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 67,         /* struct_declarator  */
  YYSYMBOL_declarator = 68,                /* declarator  */
  YYSYMBOL_pointer_direct_declarator = 69, /* pointer_direct_declarator  */
  YYSYMBOL_direct_declarator = 70,         /* direct_declarator  */
  YYSYMBOL_direct_declarator_pointer = 71, /* direct_declarator_pointer  */
  YYSYMBOL_pointer = 72,                   /* pointer  */
  YYSYMBOL_parameter_list = 73,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 74,     /* parameter_declaration  */
  YYSYMBOL_identifier_list = 75,           /* identifier_list  */
  YYSYMBOL_type_name = 76,                 /* type_name  */
  YYSYMBOL_abstract_declarator = 77,       /* abstract_declarator  */
  YYSYMBOL_abstract_declarator_with_pointer = 78, /* abstract_declarator_with_pointer  */
  YYSYMBOL_direct_abstract_declarator = 79, /* direct_abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator_pointer_free = 80, /* direct_abstract_declarator_pointer_free  */
  YYSYMBOL_initializer = 81,               /* initializer  */
  YYSYMBOL_statement = 82,                 /* statement  */
  YYSYMBOL_compound_statement = 83,        /* compound_statement  */
  YYSYMBOL_block_item_list = 84,           /* block_item_list  */
  YYSYMBOL_block_item = 85,                /* block_item  */
  YYSYMBOL_expression_statement = 86,      /* expression_statement  */
  YYSYMBOL_selection_statement = 87,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 88,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 89,            /* jump_statement  */
  YYSYMBOL_program = 90,                   /* program  */
  YYSYMBOL_external_declaration = 91,      /* external_declaration  */
  YYSYMBOL_function_definition = 92,       /* function_definition  */
  YYSYMBOL_declaration_list = 93           /* declaration_list  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    42,    43,    44,    45,
      49,    50,    54,    55,    56,    57,    61,    62,    63,    64,
      68,    69,    73,    74,    75,    79,    80,    81,    85,    86,
      87,    88,    89,    93,    94,    95,    99,   100,   104,   105,
     109,   114,   118,   122,   123,   124,   125,   126,   130,   131,
     135,   136,   140,   141,   145,   146,   150,   153,   157,   158,
     159,   163,   164,   165,   169,   170,   174,   178,   179,   183,
     184,   188,   192,   193,   198,   199,   203,   204,   205,   206,
     207,   211,   212,   213,   214,   215,   216,   217,   225,   229,
     230,   234,   235,   236,   240,   241,   245,   246,   250,   251,
     255,   256,   259,   260,   261,   262,   263,   267,   268,   269,
     270,   271,   275,   279,   280,   281,   282,   283,   287,   288,
     289,   293,   294,   298,   299,   303,   304,   308,   309,   313,
     314,   315,   316,   317,   321,   322,   326,   327,   331,   332,
     333,   337,   338,   342,   343
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
  "CONSTANT", "STRING_LITERAL", "ARROW", "LESS_THAN_EQUAL",
  "GREATER_THAN_EQUAL", "EQUAL", "NOT_EQUAL", "LESS_THAN", "GREATER_THAN",
  "AND", "OR", "DIV_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "EXTERN", "INT",
  "VOID", "STRUCT", "SIZEOF", "IF", "ELSE", "WHILE", "FOR", "RETURN",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE", "COMMA",
  "SEMICOLON", "ADDRESS", "PLUS", "ASSIGN", "DIVIDE", "MULTIPLY", "MINUS",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "assignment_expression", "if_expression",
  "assignment_operator", "expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_or_union_specifier", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "declarator",
  "pointer_direct_declarator", "direct_declarator",
  "direct_declarator_pointer", "pointer", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "abstract_declarator_with_pointer",
  "direct_abstract_declarator", "direct_abstract_declarator_pointer_free",
  "initializer", "statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "program",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     175,  -116,  -116,    13,   175,   137,   175,  -116,   114,  -116,
     175,     7,   175,  -116,  -116,    20,  -116,  -116,   147,  -116,
     415,  -116,   -14,     6,  -116,  -116,  -116,  -116,   175,   175,
     208,  -116,    20,    -3,    20,  -116,   178,  -116,   133,  -116,
     137,  -116,   243,    90,  -116,    20,    23,   299,  -116,  -116,
    -116,   182,  -116,  -116,  -116,  -116,    61,  -116,  -116,  -116,
     378,    80,    98,   103,   267,   124,  -116,  -116,  -116,  -116,
    -116,  -116,    18,    85,   133,  -116,   184,    24,   338,   221,
     134,   150,  -116,   219,  -116,  -116,  -116,  -116,   215,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
      22,    10,  -116,    35,   144,   155,   204,  -116,    20,  -116,
     124,  -116,   133,   133,   289,  -116,   251,    88,    94,   157,
     185,   309,  -116,  -116,  -116,  -116,  -116,   133,  -116,  -116,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,  -116,  -116,  -116,   390,  -116,    17,  -116,
    -116,   174,  -116,   175,  -116,   223,  -116,   216,  -116,   110,
     119,  -116,   203,   150,   218,   161,  -116,   329,   329,  -116,
    -116,   404,   233,  -116,   133,  -116,  -116,   237,  -116,  -116,
    -116,  -116,   184,   184,    24,    24,    24,    24,   338,   338,
     221,   134,  -116,  -116,   297,   236,   401,   253,   278,  -116,
    -116,   376,  -116,  -116,  -116,   252,   252,   337,   351,   239,
    -116,  -116,   133,  -116,  -116,   401,  -116,   307,   275,   433,
    -116,   345,  -116,   355,   264,  -116,   252,   359,   252,   369,
    -116,  -116,  -116,  -116,   370,  -116,  -116,   252,  -116,   252,
    -116,   252,  -116,  -116,  -116,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     140,    59,    58,     0,   140,     0,    52,    60,     0,   136,
     140,    63,     0,   139,    76,     0,    51,    88,     0,    54,
      56,    72,    73,    75,    53,     1,   137,   138,     0,    68,
       0,    64,     0,     0,     0,    50,     0,   120,     0,   143,
       0,   142,     0,     0,    81,     0,    74,     0,    67,    62,
      65,     0,    69,    71,    77,    55,    56,     2,     3,     4,
       0,     0,     0,     0,     0,     0,   118,   120,    16,    18,
      19,     6,    12,    20,     0,    22,    25,    28,    33,    36,
      38,    40,    48,     0,   123,    17,   124,   113,     0,   121,
     114,   115,   116,   117,   112,    57,   144,   141,    94,    80,
      93,     0,    89,     0,     0,     0,     0,    61,     0,    66,
       0,    14,     0,     0,     0,   135,     0,     0,    96,     0,
       0,     0,    45,    46,    47,    43,    44,     0,    20,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   119,   122,     0,    91,    75,    92,
      98,    99,    78,     0,    79,     0,    82,     0,    87,     0,
       0,    70,     0,    42,     0,     0,   125,     0,     0,   134,
       5,     0,   100,    97,     0,     9,     7,     0,    10,    41,
      24,    23,    26,    27,    31,    32,    29,    30,    34,    35,
      37,    39,    49,   103,     0,     0,     0,   101,     0,    90,
      95,     0,    85,    86,    15,     0,     0,     0,     0,     0,
      21,     8,     0,   104,   102,     0,   108,     0,     0,     0,
     105,     0,    84,     0,   127,   129,     0,     0,     0,     0,
      11,   109,   107,   110,     0,   106,    83,     0,   132,     0,
     130,     0,   111,   128,   133,   131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,  -116,   -56,  -116,   -62,   183,   321,   214,
     156,   180,   213,   -35,  -116,  -116,   -58,     2,    11,  -116,
     301,    59,  -116,   330,    68,   -16,  -116,   261,    -4,   -40,
    -116,  -116,    -5,   -41,   207,   255,   260,   -27,  -116,  -116,
    -115,  -116,   -52,    12,  -116,   290,  -106,  -116,  -116,  -116,
    -116,    62,  -116,  -116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    71,    72,   177,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   164,   127,    83,     4,   100,    18,
      19,     6,     7,    30,    31,    32,    51,    52,    33,    21,
      22,    46,    85,   217,   102,   103,   119,   195,   150,   151,
     218,    95,    86,    87,    88,    89,    90,    91,    92,    93,
       8,     9,    10,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    20,   101,    94,   111,   105,   116,   117,   168,    44,
      23,     5,   129,    48,    43,     5,    11,    24,   128,     5,
      44,     5,    39,    14,   120,    14,    54,    23,    53,    23,
      56,    40,    41,   197,    45,    23,    56,    28,    84,   152,
      23,   104,   153,    12,    96,   196,   121,    40,    15,   118,
     146,   106,   117,    40,    97,   165,   128,   197,    17,   132,
      17,   207,   208,   133,   154,   159,    13,   155,   180,   181,
      26,    29,    27,   149,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   178,    29,    29,    29,
      84,   173,   179,    98,   118,   148,   147,    38,    50,    40,
     122,   123,   124,    23,    53,   194,    29,   192,   112,     1,
       2,     3,   210,   172,    25,    50,   167,   170,   128,    99,
     142,   125,   171,   126,    29,    40,   113,    57,    58,    59,
     194,   114,    17,     1,     2,     3,    57,    58,    59,   202,
      14,   148,   153,     1,     2,     3,    60,   140,   203,   227,
     229,   155,    65,   224,   225,    60,   105,   221,    68,    69,
     223,    65,    17,    70,   141,    15,   172,    68,    69,    29,
      16,    17,    70,   156,   238,    17,   240,   230,   234,    34,
      35,    57,    58,    59,   157,   243,   174,   244,   175,   245,
     206,    23,   104,   142,     1,     2,     3,     1,     2,     3,
      60,    61,   198,    62,    63,    64,    65,    98,    36,    66,
      23,    67,    68,    69,   108,   109,    17,    70,    57,    58,
      59,   130,   131,     1,     2,     3,   200,     1,     2,     3,
     138,   139,   204,   158,     1,     2,     3,    60,    61,    49,
      62,    63,    64,    65,   201,    36,   144,   205,    67,    68,
      69,   142,   143,    17,    70,    57,    58,    59,     1,     2,
       3,   209,     1,     2,     3,   214,   211,   209,   216,   212,
      57,    58,    59,    36,    60,    61,    37,    62,    63,    64,
      65,   219,    36,   142,   169,    67,    68,    69,   237,    60,
      17,    70,    57,    58,    59,    65,   190,     1,     2,     3,
     115,    68,    69,   219,   232,    17,    70,   220,     1,     2,
       3,    60,    57,    58,    59,   182,   183,    65,     1,     2,
       3,   191,   166,    68,    69,   163,   213,    17,    70,   153,
     107,    60,    57,    58,    59,    55,   231,    65,   176,   153,
      57,    58,    59,    68,    69,   134,   135,    17,    70,   136,
     137,    60,   188,   189,    57,    58,    59,    65,    47,    60,
     199,   160,   166,    68,    69,    65,   226,    17,    70,   161,
     162,    68,    69,    60,   235,    17,    70,   153,   145,    65,
     228,    57,    58,    59,   236,    68,    69,   153,   239,    17,
      70,   142,     0,    14,     0,     1,     2,     3,   241,   242,
      60,   142,   153,     0,    14,   222,   110,     0,     0,     1,
       2,     3,    68,    69,     0,     0,    17,    70,   146,   193,
       1,     2,     3,     1,     2,     3,     0,     0,    17,   215,
     216,     0,   171,   193,     1,     2,     3,     0,     0,    17,
       0,     0,    17,     0,     0,    36,     0,     0,    37,     0,
       0,    38,     1,     2,     3,   184,   185,   186,   187,     0,
       0,     0,   233
};

static const yytype_int16 yycheck[] =
{
       5,     5,    43,    38,    60,    45,    64,    65,   114,     3,
      15,     0,    74,    29,    28,     4,     3,     6,    74,     8,
       3,    10,    20,     3,     6,     3,    29,    32,    32,    34,
      34,    20,    20,   148,    28,    40,    40,    30,    36,    29,
      45,    45,    32,    30,    42,    28,    28,    36,    28,    65,
      28,    28,   110,    42,    42,   113,   112,   172,    38,    35,
      38,   167,   168,    39,    29,   106,     4,    32,   130,   131,
       8,    12,    10,   100,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   121,    28,    29,    30,
      88,   118,   127,     3,   110,   100,   100,    36,    30,    88,
      15,    16,    17,   108,   108,   146,    47,   142,    28,    19,
      20,    21,   174,   118,     0,    47,   114,    29,   174,    29,
      32,    36,    28,    38,    65,   114,    28,     3,     4,     5,
     171,    28,    38,    19,    20,    21,     3,     4,     5,    29,
       3,   146,    32,    19,    20,    21,    22,    13,    29,   207,
     208,    32,    28,   205,   206,    22,   196,   198,    34,    35,
     201,    28,    38,    39,    14,    28,   171,    34,    35,   110,
      33,    38,    39,    29,   226,    38,   228,   212,   219,    32,
      33,     3,     4,     5,    29,   237,    29,   239,     3,   241,
      29,   196,   196,    32,    19,    20,    21,    19,    20,    21,
      22,    23,    28,    25,    26,    27,    28,     3,    30,    31,
     215,    33,    34,    35,    32,    33,    38,    39,     3,     4,
       5,    37,    38,    19,    20,    21,     3,    19,    20,    21,
       9,    10,    29,    29,    19,    20,    21,    22,    23,    31,
      25,    26,    27,    28,    28,    30,    31,    29,    33,    34,
      35,    32,    33,    38,    39,     3,     4,     5,    19,    20,
      21,    28,    19,    20,    21,    29,    29,    28,    29,    32,
       3,     4,     5,    30,    22,    23,    33,    25,    26,    27,
      28,    28,    30,    32,    33,    33,    34,    35,    24,    22,
      38,    39,     3,     4,     5,    28,   140,    19,    20,    21,
      33,    34,    35,    28,    29,    38,    39,    29,    19,    20,
      21,    22,     3,     4,     5,   132,   133,    28,    19,    20,
      21,   141,    33,    34,    35,   112,    29,    38,    39,    32,
      31,    22,     3,     4,     5,    34,    29,    28,    29,    32,
       3,     4,     5,    34,    35,     7,     8,    38,    39,    11,
      12,    22,   138,   139,     3,     4,     5,    28,    28,    22,
     153,   106,    33,    34,    35,    28,    29,    38,    39,   108,
     110,    34,    35,    22,    29,    38,    39,    32,    88,    28,
      29,     3,     4,     5,    29,    34,    35,    32,    29,    38,
      39,    32,    -1,     3,    -1,    19,    20,    21,    29,    29,
      22,    32,    32,    -1,     3,    29,    28,    -1,    -1,    19,
      20,    21,    34,    35,    -1,    -1,    38,    39,    28,    29,
      19,    20,    21,    19,    20,    21,    -1,    -1,    38,    28,
      29,    -1,    28,    29,    19,    20,    21,    -1,    -1,    38,
      -1,    -1,    38,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    19,    20,    21,   134,   135,   136,   137,    -1,
      -1,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    20,    21,    57,    58,    61,    62,    90,    91,
      92,     3,    30,    91,     3,    28,    33,    38,    59,    60,
      68,    69,    70,    72,    58,     0,    91,    91,    30,    61,
      63,    64,    65,    68,    32,    33,    30,    33,    36,    57,
      58,    83,    93,    28,     3,    28,    71,    63,    65,    31,
      64,    66,    67,    68,    29,    60,    68,     3,     4,     5,
      22,    23,    25,    26,    27,    28,    31,    33,    34,    35,
      39,    41,    42,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    56,    57,    72,    82,    83,    84,    85,
      86,    87,    88,    89,    53,    81,    57,    83,     3,    29,
      58,    73,    74,    75,    68,    69,    28,    31,    32,    33,
      28,    44,    28,    28,    28,    33,    56,    56,    65,    76,
       6,    28,    15,    16,    17,    36,    38,    55,    44,    46,
      37,    38,    35,    39,     7,     8,    11,    12,     9,    10,
      13,    14,    32,    33,    31,    85,    28,    68,    72,    77,
      78,    79,    29,    32,    29,    32,    29,    29,    29,    73,
      75,    67,    76,    52,    54,    56,    33,    57,    86,    33,
      29,    28,    72,    77,    29,     3,    29,    43,    53,    53,
      46,    46,    47,    47,    48,    48,    48,    48,    49,    49,
      50,    51,    53,    29,    73,    77,    28,    80,    28,    74,
       3,    28,    29,    29,    29,    29,    29,    86,    86,    28,
      46,    29,    32,    29,    29,    28,    29,    73,    80,    28,
      29,    73,    29,    73,    82,    82,    29,    56,    29,    56,
      53,    29,    29,    29,    73,    29,    29,    24,    82,    29,
      82,    29,    29,    82,    82,    82
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    41,    41,    42,    42,    42,    42,
      43,    43,    44,    44,    44,    44,    45,    45,    45,    45,
      46,    46,    47,    47,    47,    48,    48,    48,    49,    49,
      49,    49,    49,    50,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      61,    62,    62,    62,    63,    63,    64,    65,    65,    66,
      66,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    72,    73,
      73,    74,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    92,    92,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     4,     3,
       1,     3,     1,     2,     2,     4,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     5,     4,     2,     1,     2,     3,     2,     1,     1,
       3,     1,     1,     1,     2,     1,     1,     3,     4,     4,
       3,     1,     3,     6,     5,     4,     4,     3,     1,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       1,     2,     3,     2,     3,     3,     4,     3,     2,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       6,     7,     6,     7,     3,     2,     1,     2,     2,     2,
       0,     4,     3,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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

#line 1392 "STRUCIT-frontend.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 347 "STRUCIT-frontend.y"


#include "lex.yy.c"
int main()
{
	yyin=fopen("exemple-strucit-frontend.c","r");
	yyparse();
	fclose(yyin);
	return 0;
}
