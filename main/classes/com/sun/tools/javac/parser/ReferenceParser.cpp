#include <com/sun/tools/javac/parser/ReferenceParser.h>

#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/parser/ReferenceParser$ParseException.h>
#include <com/sun/tools/javac/parser/ReferenceParser$Reference.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/Queue.h>
#include <jcpp.h>

#undef COMMA
#undef EOF
#undef IDENTIFIER

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $ReferenceParser$ParseException = ::com::sun::tools::javac::parser::ReferenceParser$ParseException;
using $ReferenceParser$Reference = ::com::sun::tools::javac::parser::ReferenceParser$Reference;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Queue = ::java::util::Queue;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _ReferenceParser_FieldInfo_[] = {
	{"fac", "Lcom/sun/tools/javac/parser/ParserFactory;", nullptr, $PRIVATE | $FINAL, $field(ReferenceParser, fac)},
	{}
};

$MethodInfo _ReferenceParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceParser::*)($ParserFactory*)>(&ReferenceParser::init$))},
	{"parse", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/ReferenceParser$Reference;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.ReferenceParser$ParseException"},
	{"parseMember", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(ReferenceParser::*)($String*)>(&ReferenceParser::parseMember)), "com.sun.tools.javac.parser.ReferenceParser$ParseException"},
	{"parseModule", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(ReferenceParser::*)($String*)>(&ReferenceParser::parseModule)), "com.sun.tools.javac.parser.ReferenceParser$ParseException"},
	{"parseParams", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/List;", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PRIVATE, $method(static_cast<$List*(ReferenceParser::*)($String*)>(&ReferenceParser::parseParams)), "com.sun.tools.javac.parser.ReferenceParser$ParseException"},
	{"parseType", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $method(static_cast<$JCTree*(ReferenceParser::*)($String*)>(&ReferenceParser::parseType)), "com.sun.tools.javac.parser.ReferenceParser$ParseException"},
	{}
};

$InnerClassInfo _ReferenceParser_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.ReferenceParser$ParseException", "com.sun.tools.javac.parser.ReferenceParser", "ParseException", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.parser.ReferenceParser$Reference", "com.sun.tools.javac.parser.ReferenceParser", "Reference", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ReferenceParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.ReferenceParser",
	"java.lang.Object",
	nullptr,
	_ReferenceParser_FieldInfo_,
	_ReferenceParser_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.ReferenceParser$ParseException,com.sun.tools.javac.parser.ReferenceParser$Reference"
};

$Object* allocate$ReferenceParser($Class* clazz) {
	return $of($alloc(ReferenceParser));
}

void ReferenceParser::init$($ParserFactory* fac) {
	$set(this, fac, fac);
}

$ReferenceParser$Reference* ReferenceParser::parse($String* sig) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, moduleName, nullptr);
	$var($JCTree, qualExpr, nullptr);
	$var($Name, member, nullptr);
	$var($List, paramTypes, nullptr);
	$var($Log$DeferredDiagnosticHandler, deferredDiagnosticHandler, $new($Log$DeferredDiagnosticHandler, $nc(this->fac)->log));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t slash = $nc(sig)->indexOf("/"_s);
			int32_t hash = sig->indexOf("#"_s, slash + 1);
			int32_t lparen = sig->indexOf("("_s, $Math::max(slash, hash) + 1);
			if (slash > -1) {
				$assign(moduleName, parseModule($(sig->substring(0, slash))));
			} else {
				$assign(moduleName, nullptr);
			}
			if (slash > 0 && sig->length() == slash + 1) {
				$assign(qualExpr, nullptr);
				$assign(member, nullptr);
			} else if (hash == -1) {
				if (lparen == -1) {
					$assign(qualExpr, parseType($(sig->substring(slash + 1))));
					$assign(member, nullptr);
				} else {
					$assign(qualExpr, nullptr);
					$assign(member, parseMember($(sig->substring(slash + 1, lparen))));
				}
			} else {
				$assign(qualExpr, (hash == slash + 1) ? ($JCTree*)nullptr : parseType($(sig->substring(slash + 1, hash))));
				if (lparen == -1) {
					$assign(member, parseMember($(sig->substring(hash + 1))));
				} else {
					$assign(member, parseMember($(sig->substring(hash + 1, lparen))));
				}
			}
			if (lparen < 0) {
				$assign(paramTypes, nullptr);
			} else {
				int32_t rparen = sig->indexOf(")"_s, lparen);
				if (rparen != sig->length() - 1) {
					$throwNew($ReferenceParser$ParseException, "dc.ref.bad.parens"_s);
				}
				$assign(paramTypes, parseParams($(sig->substring(lparen + 1, rparen))));
			}
			if (!$nc($(deferredDiagnosticHandler->getDiagnostics()))->isEmpty()) {
				$throwNew($ReferenceParser$ParseException, "dc.ref.syntax.error"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($nc(this->fac)->log)->popDiagnosticHandler(deferredDiagnosticHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $new($ReferenceParser$Reference, moduleName, qualExpr, member, paramTypes);
}

$JCTree$JCExpression* ReferenceParser::parseModule($String* s) {
	$useLocalCurrentObjectStackCache();
	$var($JavacParser, p, $nc(this->fac)->newParser(s, false, false, false));
	$var($JCTree$JCExpression, expr, $nc(p)->qualident(false));
	$init($Tokens$TokenKind);
	if ($nc($(p->token()))->kind != $Tokens$TokenKind::EOF) {
		$throwNew($ReferenceParser$ParseException, "dc.ref.unexpected.input"_s);
	}
	return expr;
}

$JCTree* ReferenceParser::parseType($String* s) {
	$useLocalCurrentObjectStackCache();
	$var($JavacParser, p, $nc(this->fac)->newParser(s, false, false, false));
	$var($JCTree, tree, $nc(p)->parseType());
	$init($Tokens$TokenKind);
	if ($nc($(p->token()))->kind != $Tokens$TokenKind::EOF) {
		$throwNew($ReferenceParser$ParseException, "dc.ref.unexpected.input"_s);
	}
	return tree;
}

$Name* ReferenceParser::parseMember($String* s) {
	$useLocalCurrentObjectStackCache();
	$var($JavacParser, p, $nc(this->fac)->newParser(s, false, false, false));
	$var($Name, name, $nc(p)->ident());
	$init($Tokens$TokenKind);
	if ($nc($(p->token()))->kind != $Tokens$TokenKind::EOF) {
		$throwNew($ReferenceParser$ParseException, "dc.ref.unexpected.input"_s);
	}
	return name;
}

$List* ReferenceParser::parseParams($String* s) {
	$useLocalCurrentObjectStackCache();
	if ($($nc(s)->trim())->isEmpty()) {
		return $List::nil();
	}
	$var($JavacParser, p, $nc(this->fac)->newParser($($nc(s)->replace(static_cast<$CharSequence*>("..."_s), static_cast<$CharSequence*>("[]"_s))), false, false, false));
	$var($ListBuffer, paramTypes, $new($ListBuffer));
	paramTypes->add($($nc(p)->parseType()));
	$init($Tokens$TokenKind);
	if ($nc($($nc(p)->token()))->kind == $Tokens$TokenKind::IDENTIFIER) {
		p->nextToken();
	}
	while ($nc($($nc(p)->token()))->kind == $Tokens$TokenKind::COMMA) {
		p->nextToken();
		paramTypes->add($(p->parseType()));
		if ($nc($(p->token()))->kind == $Tokens$TokenKind::IDENTIFIER) {
			p->nextToken();
		}
	}
	if ($nc($($nc(p)->token()))->kind != $Tokens$TokenKind::EOF) {
		$throwNew($ReferenceParser$ParseException, "dc.ref.unexpected.input"_s);
	}
	return paramTypes->toList();
}

ReferenceParser::ReferenceParser() {
}

$Class* ReferenceParser::load$($String* name, bool initialize) {
	$loadClass(ReferenceParser, name, initialize, &_ReferenceParser_ClassInfo_, allocate$ReferenceParser);
	return class$;
}

$Class* ReferenceParser::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com