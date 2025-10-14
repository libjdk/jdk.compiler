#ifndef _com_sun_tools_javac_parser_JavacParser_h_
#define _com_sun_tools_javac_parser_JavacParser_h_
//$ class com.sun.tools.javac.parser.JavacParser
//$ extends com.sun.tools.javac.parser.Parser

#include <com/sun/tools/javac/parser/Parser.h>
#include <java/lang/Array.h>

#pragma push_macro("DIAMOND")
#undef DIAMOND
#pragma push_macro("EXPR")
#undef EXPR
#pragma push_macro("F")
#undef F
#pragma push_macro("LAX_IDENTIFIER")
#undef LAX_IDENTIFIER
#pragma push_macro("NOLAMBDA")
#undef NOLAMBDA
#pragma push_macro("NOPARAMS")
#undef NOPARAMS
#pragma push_macro("RECOVERY_THRESHOLD")
#undef RECOVERY_THRESHOLD
#pragma push_macro("S")
#undef S
#pragma push_macro("TYPE")
#undef TYPE
#pragma push_macro("TYPEARG")
#undef TYPEARG

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ModuleTree$ModuleKind;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Preview;
					class Source;
					class Source$Feature;
					class TypeTag;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class JavacParser$AbstractEndPosTable;
					class JavacParser$EnumeratorEstimate;
					class JavacParser$ErrorRecoveryAction;
					class JavacParser$ParensResult;
					class JavacParser$PatternResult;
					class Lexer;
					class ParserFactory;
					class Tokens$Comment;
					class Tokens$Token;
					class Tokens$TokenKind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DocCommentTable;
					class JCTree;
					class JCTree$JCAnnotation;
					class JCTree$JCBlock;
					class JCTree$JCCaseLabel;
					class JCTree$JCCatch;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCErroneous;
					class JCTree$JCExpression;
					class JCTree$JCLiteral;
					class JCTree$JCModifiers;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewClass;
					class JCTree$JCPattern;
					class JCTree$JCPrimitiveTypeTree;
					class JCTree$JCStatement;
					class JCTree$JCTypeApply;
					class JCTree$JCTypeParameter;
					class JCTree$JCVariableDecl;
					class JCTree$Tag;
					class TreeMaker;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Error;
					class JCDiagnostic$Fragment;
					class List;
					class ListBuffer;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import JavacParser : public ::com::sun::tools::javac::parser::Parser {
	$class(JavacParser, 0, ::com::sun::tools::javac::parser::Parser)
public:
	JavacParser();
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac, ::com::sun::tools::javac::parser::Lexer* S, bool keepDocComments, bool keepLineMap, bool keepEndPositions);
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac, ::com::sun::tools::javac::parser::Lexer* S, bool keepDocComments, bool keepLineMap, bool keepEndPositions, bool parseModuleInfo);
	virtual void accept(::com::sun::tools::javac::parser::Tokens$TokenKind* tk);
	virtual void accept(::com::sun::tools::javac::parser::Tokens$TokenKind* tk, ::java::util::function::Function* errorProvider);
	bool allowedAfterSealedOrNonSealed(::com::sun::tools::javac::parser::Tokens$Token* next, bool local, bool currentIsNonSealed);
	virtual ::com::sun::tools::javac::parser::JavacParser$ParensResult* analyzeParens();
	virtual ::com::sun::tools::javac::parser::JavacParser$PatternResult* analyzePattern(int32_t lookahead);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* annotation(int32_t pos, ::com::sun::tools::javac::tree::JCTree$Tag* kind);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* annotationFieldValue();
	virtual ::com::sun::tools::javac::util::List* annotationFieldValues();
	virtual ::com::sun::tools::javac::util::List* annotationFieldValuesOpt();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* annotationValue();
	virtual ::com::sun::tools::javac::util::List* annotationsOpt(::com::sun::tools::javac::tree::JCTree$Tag* kind);
	virtual ::com::sun::tools::javac::util::List* arguments();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* arguments(::com::sun::tools::javac::util::List* typeArgs, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* argumentsOpt(::com::sun::tools::javac::util::List* typeArgs, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* arrayCreatorRest(int32_t newpos, ::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* arrayInitializer(int32_t newpos, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::util::List* arrayInitializerElements(int32_t newpos, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual void attach(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* basicType();
	virtual ::com::sun::tools::javac::tree::JCTree$JCBlock* block(int32_t pos, int64_t flags);
	virtual ::com::sun::tools::javac::tree::JCTree$JCBlock* block();
	virtual ::com::sun::tools::javac::util::List* blockStatement();
	virtual ::com::sun::tools::javac::util::List* blockStatements();
	::com::sun::tools::javac::tree::JCTree$JCExpression* bracketsOpt(::com::sun::tools::javac::tree::JCTree$JCExpression* t, ::com::sun::tools::javac::util::List* annotations);
	::com::sun::tools::javac::tree::JCTree$JCExpression* bracketsOpt(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	::com::sun::tools::javac::tree::JCTree$JCExpression* bracketsOptCont(::com::sun::tools::javac::tree::JCTree$JCExpression* t, int32_t pos, ::com::sun::tools::javac::util::List* annotations);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* bracketsSuffix(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCCatch* catchClause();
	virtual ::com::sun::tools::javac::util::List* catchTypes();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* checkExprStat(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual void checkNoMods(int64_t mods);
	virtual void checkNoMods(int32_t pos, int64_t mods);
	virtual void checkSourceLevel(::com::sun::tools::javac::code::Source$Feature* feature);
	virtual void checkSourceLevel(int32_t pos, ::com::sun::tools::javac::code::Source$Feature* feature);
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* classCreatorRest(int32_t newpos, ::com::sun::tools::javac::tree::JCTree$JCExpression* encl, ::com::sun::tools::javac::util::List* typeArgs, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* classDeclaration(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual ::com::sun::tools::javac::util::List* classInterfaceOrRecordBody(::com::sun::tools::javac::util::Name* className, bool isInterface, bool isRecord);
	virtual ::com::sun::tools::javac::util::List* classOrInterfaceOrRecordBodyDeclaration(::com::sun::tools::javac::util::Name* className, bool isInterface, bool isRecord);
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* classOrRecordOrInterfaceOrEnumDeclaration(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* creator(int32_t newpos, ::com::sun::tools::javac::util::List* typeArgs);
	::com::sun::tools::javac::tree::JCTree$JCStatement* doRecover(int32_t startPos, ::com::sun::tools::javac::parser::JavacParser$ErrorRecoveryAction* action, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	static int32_t earlier(int32_t pos1, int32_t pos2);
	virtual ::com::sun::tools::javac::util::List* enumBody(::com::sun::tools::javac::util::Name* enumName);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* enumDeclaration(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual ::com::sun::tools::javac::tree::JCTree* enumeratorDeclaration(::com::sun::tools::javac::util::Name* enumName);
	::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate* estimateEnumeratorOrMember(::com::sun::tools::javac::util::Name* enumName);
	bool foldIfNeeded(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::util::ListBuffer* litBuf, ::com::sun::tools::javac::util::ListBuffer* opStack, bool last);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* foldStrings(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	virtual ::com::sun::tools::javac::util::List* forInit();
	virtual ::com::sun::tools::javac::util::List* forUpdate();
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* formalParameter(bool lambdaParameter, bool recordComponent);
	virtual ::com::sun::tools::javac::util::List* formalParameters();
	virtual ::com::sun::tools::javac::util::List* formalParameters(bool lambdaParameters, bool recordComponents);
	virtual int32_t getEndPos(::com::sun::tools::javac::tree::JCTree* tree);
	virtual int32_t getStartPos(::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::util::Name* ident();
	virtual ::com::sun::tools::javac::util::Name* ident(bool allowClass);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* illegal(int32_t pos);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* illegal();
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* implicitParameter();
	virtual ::com::sun::tools::javac::util::List* implicitParameters(bool hasParens);
	virtual ::com::sun::tools::javac::tree::JCTree* importDeclaration();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* innerCreator(int32_t newpos, ::com::sun::tools::javac::util::List* typeArgs, ::com::sun::tools::javac::tree::JCTree$JCExpression* encl);
	::com::sun::tools::javac::tree::JCTree$JCExpression* insertAnnotationsToMostInner(::com::sun::tools::javac::tree::JCTree$JCExpression* type, ::com::sun::tools::javac::util::List* annos, bool createNewLevel);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* interfaceDeclaration(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual bool isInvalidUnqualifiedMethodIdentifier(int32_t pos, ::com::sun::tools::javac::util::Name* name);
	virtual bool isNonSealedClassStart(bool local);
	virtual bool isNonSealedIdentifier(::com::sun::tools::javac::parser::Tokens$Token* someToken, int32_t lookAheadOffset);
	virtual bool isRecordStart();
	virtual bool isSealedClassStart(bool local);
	virtual bool isUnboundMemberRef();
	virtual bool isZero($String* s);
	static $String* lambda$merge$1(::com::sun::tools::javac::tree::JCTree$JCLiteral* lit);
	static bool lambda$new$3(::com::sun::tools::javac::parser::Tokens$TokenKind* t);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* lambda$switchExpressionStatementGroup$2(::com::sun::tools::javac::parser::Tokens$TokenKind* tk);
	::com::sun::tools::javac::tree::JCTree$JCAnnotation* lambda$term2Rest$0(::com::sun::tools::javac::tree::JCTree$JCAnnotation* decl);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* lambdaExpression(::com::sun::tools::javac::util::List* args, int32_t pos);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* lambdaExpressionOrStatement(bool hasParens, bool explicitParams, int32_t pos);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* lambdaExpressionOrStatementRest(::com::sun::tools::javac::util::List* args, int32_t pos);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* lambdaStatement(::com::sun::tools::javac::util::List* args, int32_t pos, int32_t pos2);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* literal(::com::sun::tools::javac::util::Name* prefix);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* literal(::com::sun::tools::javac::util::Name* prefix, int32_t pos);
	::com::sun::tools::javac::util::List* localVariableDeclarations(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* memberReferenceSuffix(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* memberReferenceSuffix(int32_t pos1, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual bool merge(::com::sun::tools::javac::util::ListBuffer* litBuf, ::com::sun::tools::javac::util::ListBuffer* opStack);
	virtual ::com::sun::tools::javac::tree::JCTree* methodDeclaratorRest(int32_t pos, ::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* typarams, bool isInterface, bool isVoid, bool isRecord, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual ::com::sun::tools::javac::tree::JCTree$JCModifiers* modifiersOpt();
	virtual ::com::sun::tools::javac::tree::JCTree$JCModifiers* modifiersOpt(::com::sun::tools::javac::tree::JCTree$JCModifiers* partial);
	virtual ::com::sun::tools::javac::tree::JCTree$JCModuleDecl* moduleDecl(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::source::tree::ModuleTree$ModuleKind* kind, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual ::com::sun::tools::javac::util::List* moduleDirectiveList();
	virtual ::com::sun::tools::javac::util::ListBuffer* moreStatementExpressions(int32_t pos, ::com::sun::tools::javac::tree::JCTree$JCExpression* first, ::com::sun::tools::javac::util::ListBuffer* stats);
	virtual ::com::sun::tools::javac::tree::DocCommentTable* newDocCommentTable(bool keepDocComments, ::com::sun::tools::javac::parser::ParserFactory* fac);
	virtual ::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable* newEndPosTable(bool keepEndPositions);
	$Array<::com::sun::tools::javac::tree::JCTree$JCExpression>* newOdStack();
	$Array<::com::sun::tools::javac::parser::Tokens$Token>* newOpStack();
	virtual void nextToken();
	virtual ::com::sun::tools::javac::tree::JCTree$JCModifiers* optFinal(int64_t flags);
	static ::com::sun::tools::javac::tree::JCTree$Tag* optag(::com::sun::tools::javac::parser::Tokens$TokenKind* token);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parExpression();
	::com::sun::tools::javac::tree::JCTree$JCCaseLabel* parseCaseLabel();
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* parseCompilationUnit() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parseExpression() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCPattern* parsePattern(int32_t pos, ::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* parsedType, bool inInstanceOf);
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* parseSimpleStatement();
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* parseStatement() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* parseStatementAsBlock();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parseType() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parseType(bool allowVar);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parseType(bool allowVar, ::com::sun::tools::javac::util::List* annotations);
	virtual bool peekToken(::java::util::function::Predicate* tk);
	virtual bool peekToken(int32_t lookahead, ::java::util::function::Predicate* tk);
	virtual bool peekToken(::java::util::function::Predicate* tk1, ::java::util::function::Predicate* tk2);
	virtual bool peekToken(int32_t lookahead, ::java::util::function::Predicate* tk1, ::java::util::function::Predicate* tk2);
	virtual bool peekToken(::java::util::function::Predicate* tk1, ::java::util::function::Predicate* tk2, ::java::util::function::Predicate* tk3);
	virtual bool peekToken(int32_t lookahead, ::java::util::function::Predicate* tk1, ::java::util::function::Predicate* tk2, ::java::util::function::Predicate* tk3);
	virtual bool peekToken($Array<::java::util::function::Predicate>* kinds);
	virtual bool peekToken(int32_t lookahead, $Array<::java::util::function::Predicate>* kinds);
	virtual ::com::sun::tools::javac::util::List* permitsClause(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, $String* classOrInterface);
	static int32_t prec(::com::sun::tools::javac::parser::Tokens$TokenKind* token);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* qualident(bool allowAnnos);
	virtual ::com::sun::tools::javac::util::List* qualidentList(bool allowAnnos);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* recordDeclaration(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::parser::Tokens$Comment* dc);
	virtual void reportSyntaxError(int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual void reportSyntaxError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* diagPos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual ::com::sun::tools::javac::tree::JCTree* resource();
	virtual ::com::sun::tools::javac::util::List* resources();
	virtual ::com::sun::tools::javac::util::Name* restrictedTypeName(::com::sun::tools::javac::tree::JCTree$JCExpression* e, bool shouldWarn);
	virtual ::com::sun::tools::javac::code::Source* restrictedTypeNameStartingAtSource(::com::sun::tools::javac::util::Name* name, int32_t pos, bool shouldWarn);
	virtual void selectExprMode();
	virtual void selectTypeMode();
	virtual void setErrorEndPos(int32_t errPos);
	virtual void skip(bool stopAtImport, bool stopAtMemberDecl, bool stopAtIdentifier, bool stopAtStatement);
	int32_t skipAnnotation(int32_t lookahead);
	virtual void storeEnd(::com::sun::tools::javac::tree::JCTree* tree, int32_t endpos);
	::com::sun::tools::javac::tree::JCTree$JCLiteral* stringLiteral(::com::sun::tools::javac::tree::JCTree* tree);
	virtual $String* strval(::com::sun::tools::javac::util::Name* prefix);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* superSuffix(::com::sun::tools::javac::util::List* typeArgs, ::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::util::List* switchBlockStatementGroup();
	virtual ::com::sun::tools::javac::util::List* switchBlockStatementGroups();
	::com::sun::tools::javac::util::List* switchExpressionStatementGroup();
	virtual ::com::sun::tools::javac::tree::JCTree$JCErroneous* syntaxError(int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual ::com::sun::tools::javac::tree::JCTree$JCErroneous* syntaxError(int32_t pos, ::com::sun::tools::javac::util::List* errs, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term(int32_t newmode);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term1();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term1Rest(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term2();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term2Rest(::com::sun::tools::javac::tree::JCTree$JCExpression* t, int32_t minprec);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term3();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* term3Rest(::com::sun::tools::javac::tree::JCTree$JCExpression* t, ::com::sun::tools::javac::util::List* typeArgs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* termRest(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::tree::JCTree* to(::com::sun::tools::javac::tree::JCTree* t);
	virtual ::com::sun::tools::javac::tree::JCTree* toP(::com::sun::tools::javac::tree::JCTree* t);
	virtual ::com::sun::tools::javac::parser::Tokens$Token* token();
	virtual ::com::sun::tools::javac::util::List* typeAnnotationsOpt();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* typeArgument();
	virtual ::com::sun::tools::javac::util::List* typeArguments(bool diamondAllowed);
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeApply* typeArguments(::com::sun::tools::javac::tree::JCTree$JCExpression* t, bool diamondAllowed);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* typeArgumentsOpt(::com::sun::tools::javac::tree::JCTree$JCExpression* t);
	virtual ::com::sun::tools::javac::util::List* typeArgumentsOpt();
	virtual ::com::sun::tools::javac::util::List* typeArgumentsOpt(int32_t useMode);
	virtual ::com::sun::tools::javac::tree::JCTree* typeDeclaration(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::parser::Tokens$Comment* docComment);
	virtual ::com::sun::tools::javac::util::List* typeList();
	virtual ::com::sun::tools::javac::util::Name* typeName();
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeParameter* typeParameter();
	virtual ::com::sun::tools::javac::util::List* typeParametersOpt();
	static ::com::sun::tools::javac::code::TypeTag* typetag(::com::sun::tools::javac::parser::Tokens$TokenKind* token);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* unannotatedType(bool allowVar);
	static ::com::sun::tools::javac::tree::JCTree$Tag* unoptag(::com::sun::tools::javac::parser::Tokens$TokenKind* token);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variableDeclarator(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type, bool reqInit, ::com::sun::tools::javac::parser::Tokens$Comment* dc, bool localDecl);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variableDeclaratorId(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variableDeclaratorId(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type, bool lambdaParameter, bool recordComponent);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variableDeclaratorRest(int32_t pos, ::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type, ::com::sun::tools::javac::util::Name* name, bool reqInit, ::com::sun::tools::javac::parser::Tokens$Comment* dc, bool localDecl, bool compound);
	virtual ::com::sun::tools::javac::util::ListBuffer* variableDeclarators(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type, ::com::sun::tools::javac::util::ListBuffer* vdefs, bool localDecl);
	virtual ::com::sun::tools::javac::util::ListBuffer* variableDeclaratorsRest(int32_t pos, ::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* type, ::com::sun::tools::javac::util::Name* name, bool reqInit, ::com::sun::tools::javac::parser::Tokens$Comment* dc, ::com::sun::tools::javac::util::ListBuffer* vdefs, bool localDecl);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* variableInitializer();
	static bool $assertionsDisabled;
	static const int32_t infixPrecedenceLevels = 10;
	bool parseModuleInfo = false;
	::com::sun::tools::javac::parser::Lexer* S = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* F = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable* endPosTable = nullptr;
	::com::sun::tools::javac::util::List* typeAnnotationsPushedBack = nullptr;
	bool permitTypeAnnotationsPushBack = false;
	bool allowStringFolding = false;
	bool keepDocComments = false;
	bool keepLineMap = false;
	bool allowThisIdent = false;
	bool allowYieldStatement = false;
	bool allowRecords = false;
	bool allowSealedTypes = false;
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* receiverParam = nullptr;
	static const int32_t EXPR = 1;
	static const int32_t TYPE = 2;
	static const int32_t NOPARAMS = 4;
	static const int32_t TYPEARG = 8;
	static const int32_t DIAMOND = 16;
	static const int32_t NOLAMBDA = 32;
	int32_t mode = 0;
	int32_t lastmode = 0;
	::com::sun::tools::javac::parser::Tokens$Token* token$ = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCErroneous* errorTree = nullptr;
	static const int32_t RECOVERY_THRESHOLD = 50;
	int32_t errorPos = 0;
	int32_t count = 0;
	::com::sun::tools::javac::tree::DocCommentTable* docComments = nullptr;
	::java::util::ArrayList* odStackSupply = nullptr;
	::java::util::ArrayList* opStackSupply = nullptr;
	::java::util::function::Predicate* LAX_IDENTIFIER = nullptr;
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$Fragment, 2>* decisionTable;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DIAMOND")
#pragma pop_macro("EXPR")
#pragma pop_macro("F")
#pragma pop_macro("LAX_IDENTIFIER")
#pragma pop_macro("NOLAMBDA")
#pragma pop_macro("NOPARAMS")
#pragma pop_macro("RECOVERY_THRESHOLD")
#pragma pop_macro("S")
#pragma pop_macro("TYPE")
#pragma pop_macro("TYPEARG")

#endif // _com_sun_tools_javac_parser_JavacParser_h_