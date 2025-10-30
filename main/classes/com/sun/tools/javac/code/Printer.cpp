#include <com/sun/tools/javac/code/Printer.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Printer$1.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ARRAY
#undef CLASS
#undef FORALL
#undef PRIME
#undef TYP
#undef UNBOUND

using $Messages = ::com::sun::tools::javac::api::Messages;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Printer$1 = ::com::sun::tools::javac::code::Printer$1;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Printer_FieldInfo_[] = {
	{"seenCaptured", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Printer, seenCaptured)},
	{"PRIME", "I", nullptr, $STATIC | $FINAL, $constField(Printer, PRIME)},
	{}
};

$MethodInfo _Printer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Printer::*)()>(&Printer::init$))},
	{"capturedVarId", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"className", "(Lcom/sun/tools/javac/code/Type$ClassType;ZLjava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"createStandardPrinter", "(Lcom/sun/tools/javac/api/Messages;)Lcom/sun/tools/javac/code/Printer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Printer*(*)($Messages*)>(&Printer::createStandardPrinter))},
	{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT | $ABSTRACT},
	{"printAnnotations", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Printer::*)($Type*)>(&Printer::printAnnotations))},
	{"printAnnotations", "(Lcom/sun/tools/javac/code/Type;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Printer::*)($Type*,bool)>(&Printer::printAnnotations))},
	{"printBaseElementType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;Ljava/util/Locale;)V", nullptr, $PRIVATE, $method(static_cast<void(Printer::*)($Type*,$StringBuilder*,$Locale*)>(&Printer::printBaseElementType))},
	{"printBrackets", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;Ljava/util/Locale;)V", nullptr, $PRIVATE, $method(static_cast<void(Printer::*)($Type*,$StringBuilder*,$Locale*)>(&Printer::printBrackets))},
	{"printMethodArgs", "(Lcom/sun/tools/javac/util/List;ZLjava/util/Locale;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZLjava/util/Locale;)Ljava/lang/String;", $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"visit", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visit", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitOperatorSymbol", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitOperatorSymbol", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackageSymbol", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitPackageSymbol", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitSymbols", "(Lcom/sun/tools/javac/util/List;Ljava/util/Locale;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitTypeSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypes", "(Lcom/sun/tools/javac/util/List;Ljava/util/Locale;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitVarSymbol", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitVarSymbol", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Printer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$Visitor", "com.sun.tools.javac.code.Type", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$Visitor", "com.sun.tools.javac.code.Symbol", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Printer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Printer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Printer",
	"java.lang.Object",
	"com.sun.tools.javac.code.Type$Visitor,com.sun.tools.javac.code.Symbol$Visitor",
	_Printer_FieldInfo_,
	_Printer_MethodInfo_,
	"Ljava/lang/Object;Lcom/sun/tools/javac/code/Type$Visitor<Ljava/lang/String;Ljava/util/Locale;>;Lcom/sun/tools/javac/code/Symbol$Visitor<Ljava/lang/String;Ljava/util/Locale;>;",
	nullptr,
	_Printer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Printer$1"
};

$Object* allocate$Printer($Class* clazz) {
	return $of($alloc(Printer));
}

int32_t Printer::hashCode() {
	 return this->$Type$Visitor::hashCode();
}

bool Printer::equals(Object$* arg0) {
	 return this->$Type$Visitor::equals(arg0);
}

$Object* Printer::clone() {
	 return this->$Type$Visitor::clone();
}

$String* Printer::toString() {
	 return this->$Type$Visitor::toString();
}

void Printer::finalize() {
	this->$Type$Visitor::finalize();
}

void Printer::init$() {
	$set(this, seenCaptured, $List::nil());
}

Printer* Printer::createStandardPrinter($Messages* messages) {
	$init(Printer);
	return $new($Printer$1, messages);
}

$String* Printer::visitTypes($List* ts, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, sbuf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				sbuf->append($(visit(t, locale)));
			}
		}
	}
	return $nc($(sbuf->toList()))->toString();
}

$String* Printer::visitSymbols($List* ts, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, sbuf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, t, $cast($Symbol, i$->next()));
			{
				sbuf->append($(visit(t, locale)));
			}
		}
	}
	return $nc($(sbuf->toList()))->toString();
}

$String* Printer::visit($Type* t, $Locale* locale) {
	return $cast($String, $nc(t)->accept(static_cast<$Type$Visitor*>(this), $of(locale)));
}

$String* Printer::visit($Symbol* s, $Locale* locale) {
	return $cast($String, $nc(s)->accept(static_cast<$Symbol$Visitor*>(this), $of(locale)));
}

$String* Printer::visitCapturedType($Type$CapturedType* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->seenCaptured)->contains(t)) {
		$var($String, var$0, $(printAnnotations(t)));
		return $concat(var$0, $(localize(locale, "compiler.misc.type.captureof.1"_s, $$new($ObjectArray, {$($of(capturedVarId(t, locale)))}))));
	} else {
		{
			$var($Throwable, var$1, nullptr);
			$var($String, var$3, nullptr);
			bool return$2 = false;
			try {
				$set(this, seenCaptured, $nc(this->seenCaptured)->prepend(t));
				$var($String, var$4, $(printAnnotations(t)));
				$assign(var$3, $concat(var$4, $(localize(locale, "compiler.misc.type.captureof"_s, $$new($ObjectArray, {
					$($of(capturedVarId(t, locale))),
					$($of(visit(static_cast<$Type*>($nc(t)->wildcard), locale)))
				})))));
				return$2 = true;
				goto $finally;
			} catch ($Throwable& var$5) {
				$assign(var$1, var$5);
			} $finally: {
				$set(this, seenCaptured, $nc(this->seenCaptured)->tail);
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
			if (return$2) {
				return var$3;
			}
		}
	}
	$shouldNotReachHere();
}

$String* Printer::visitForAll($Type$ForAll* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$(printAnnotations(t)), "<"_s}));
	$var($String, var$1, $$concat(var$2, $(visitTypes($nc(t)->tvars, locale))));
	$var($String, var$0, $$concat(var$1, ">"));
	return $concat(var$0, $(visit($nc(t)->qtype, locale)));
}

$String* Printer::visitUndetVar($Type$UndetVar* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->getInst() != nullptr) {
		$var($String, var$0, $(printAnnotations(t)));
		return $concat(var$0, $(visit($(t->getInst()), locale)));
	} else {
		$var($String, var$2, $(printAnnotations(t)));
		$var($String, var$1, $$concat(var$2, $(visit(t->qtype, locale))));
		return $concat(var$1, "?");
	}
}

$String* Printer::visitArrayType($Type$ArrayType* t, $Locale* locale) {
	$var($StringBuilder, res, $new($StringBuilder));
	printBaseElementType(t, res, locale);
	printBrackets(t, res, locale);
	return res->toString();
}

$String* Printer::printAnnotations($Type* t) {
	return printAnnotations(t, false);
}

$String* Printer::printAnnotations($Type* t, bool prefix) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($List, annos, $cast($List, $nc(t)->getAnnotationMirrors()));
	if (!$nc(annos)->isEmpty()) {
		if (prefix) {
			sb->append(u' ');
		}
		sb->append($of(annos));
		sb->append(u' ');
	}
	return sb->toString();
}

void Printer::printBaseElementType($Type* t, $StringBuilder* sb, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Type, arrel, t);
	$init($TypeTag);
	while ($nc(arrel)->hasTag($TypeTag::ARRAY)) {
		$assign(arrel, $nc(($cast($Type$ArrayType, arrel)))->elemtype);
	}
	$nc(sb)->append($(visit(arrel, locale)));
}

void Printer::printBrackets($Type* t, $StringBuilder* sb, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Type, arrel, t);
	$init($TypeTag);
	while ($nc(arrel)->hasTag($TypeTag::ARRAY)) {
		$nc(sb)->append($(printAnnotations(arrel, true)));
		sb->append("[]"_s);
		$assign(arrel, $nc(($cast($Type$ArrayType, arrel)))->elemtype);
	}
}

$String* Printer::visitClassType($Type$ClassType* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$init($TypeTag);
	$init($Kinds$Kind);
	if ($nc($($nc(t)->getEnclosingType()))->hasTag($TypeTag::CLASS) && $nc($nc(t->tsym)->owner)->kind == $Kinds$Kind::TYP) {
		buf->append($(visit($(t->getEnclosingType()), locale)));
		buf->append(u'.');
		buf->append($(printAnnotations(t)));
		buf->append($(className(t, false, locale)));
	} else {
		buf->append($(printAnnotations(t)));
		buf->append($(className(t, true, locale)));
	}
	if ($nc($($nc(t)->getTypeArguments()))->nonEmpty()) {
		buf->append(u'<');
		buf->append($(visitTypes($(t->getTypeArguments()), locale)));
		buf->append(u'>');
	}
	return buf->toString();
}

$String* Printer::visitMethodType($Type$MethodType* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({"("_s, $(printMethodArgs($nc(t)->argtypes$, false, locale)), ")"_s}));
	return $concat(var$0, $(visit($nc(t)->restype, locale)));
}

$String* Printer::visitPackageType($Type$PackageType* t, $Locale* locale) {
	return $nc($($nc($nc(t)->tsym)->getQualifiedName()))->toString();
}

$String* Printer::visitWildcardType($Type$WildcardType* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $new($StringBuilder));
	s->append($of($nc(t)->kind));
	$init($BoundKind);
	if ($nc(t)->kind != $BoundKind::UNBOUND) {
		s->append($(printAnnotations(t)));
		s->append($(visit(t->type, locale)));
	}
	return s->toString();
}

$String* Printer::visitErrorType($Type$ErrorType* t, $Locale* locale) {
	return visitType(static_cast<$Type*>(t), locale);
}

$String* Printer::visitTypeVar($Type$TypeVar* t, $Locale* locale) {
	return visitType(static_cast<$Type*>(t), locale);
}

$String* Printer::visitModuleType($Type$ModuleType* t, $Locale* locale) {
	return visitType(static_cast<$Type*>(t), locale);
}

$String* Printer::visitType($Type* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, ($nc(t)->tsym == nullptr || $nc($nc(t)->tsym)->name == nullptr) ? localize(locale, "compiler.misc.type.none"_s, $$new($ObjectArray, 0)) : $nc($nc($nc(t)->tsym)->name)->toString());
	return s;
}

$String* Printer::className($Type$ClassType* t, bool longform, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc(t)->tsym);
	bool var$0 = $nc($nc(sym)->name)->length() == 0;
	if (var$0 && ((int64_t)(sym->flags() & (uint64_t)(int64_t)0x01000000)) != 0) {
		$var($StringBuilder, s, $new($StringBuilder, $(visit(t->supertype_field, locale))));
		{
			$var($List, is, t->interfaces_field);
			for (; $nc(is)->nonEmpty(); $assign(is, $nc(is)->tail)) {
				s->append(u'&');
				s->append($(visit($cast($Type, is->head), locale)));
			}
		}
		return s->toString();
	} else if ($nc(sym->name)->length() == 0) {
		$var($String, s, nullptr);
		$var($Type$ClassType, norm, $cast($Type$ClassType, $nc(t->tsym)->type));
		if (norm == nullptr) {
			$assign(s, localize(locale, "compiler.misc.anonymous.class"_s, $$new($ObjectArray, {($Object*)nullptr})));
		} else if ($nc(norm)->interfaces_field != nullptr && $nc(norm->interfaces_field)->nonEmpty()) {
			$assign(s, localize(locale, "compiler.misc.anonymous.class"_s, $$new($ObjectArray, {$($of(visit($cast($Type, $nc(norm->interfaces_field)->head), locale)))})));
		} else {
			$assign(s, localize(locale, "compiler.misc.anonymous.class"_s, $$new($ObjectArray, {$($of(visit(norm->supertype_field, locale)))})));
		}
		return s;
	} else if (longform) {
		return $nc($(sym->getQualifiedName()))->toString();
	} else {
		return $nc(sym->name)->toString();
	}
}

$String* Printer::printMethodArgs($List* args$renamed, bool varArgs, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, args$renamed);
	if (!varArgs) {
		return visitTypes(args, locale);
	} else {
		$var($StringBuilder, buf, $new($StringBuilder));
		while ($nc($nc(args)->tail)->nonEmpty()) {
			buf->append($(visit($cast($Type, args->head), locale)));
			$assign(args, args->tail);
			buf->append(u',');
		}
		$init($TypeTag);
		if ($nc(($cast($Type, $nc(args)->head)))->hasTag($TypeTag::ARRAY)) {
			buf->append($(visit($nc(($cast($Type$ArrayType, args->head)))->elemtype, locale)));
			if ($nc($($cast($List, $nc(($cast($Type, args->head)))->getAnnotationMirrors())))->nonEmpty()) {
				buf->append(u' ');
				buf->append($($of($nc(($cast($Type, args->head)))->getAnnotationMirrors())));
				buf->append(u' ');
			}
			buf->append("..."_s);
		} else {
			buf->append($(visit($cast($Type, args->head), locale)));
		}
		return buf->toString();
	}
}

$String* Printer::visitClassSymbol($Symbol$ClassSymbol* sym, $Locale* locale) {
	return $nc($nc(sym)->name)->isEmpty() ? localize(locale, "compiler.misc.anonymous.class"_s, $$new($ObjectArray, {$of($nc(sym)->flatname)})) : $nc($nc(sym)->fullname)->toString();
}

$String* Printer::visitMethodSymbol($Symbol$MethodSymbol* s, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->isStaticOrInstanceInit()) {
		return $nc($nc(s->owner)->name)->toString();
	} else {
		$var($String, ms, (s->name == $nc($nc($nc(s->name)->table)->names)->init) ? $nc($nc(s->owner)->name)->toString() : $nc(s->name)->toString());
		if (s->type != nullptr) {
			$init($TypeTag);
			if ($nc(s->type)->hasTag($TypeTag::FORALL)) {
				$assign(ms, $str({"<"_s, $(visitTypes($($nc(s->type)->getTypeArguments()), locale)), ">"_s, ms}));
			}
			$var($String, var$1, "("_s);
			$var($List, var$2, $nc(s->type)->getParameterTypes());
			$var($String, var$0, $$concat(var$1, $(printMethodArgs(var$2, ((int64_t)(s->flags() & (uint64_t)(int64_t)0x0000000400000000)) != 0, locale))));
			$plusAssign(ms, $$concat(var$0, ")"));
		}
		return ms;
	}
}

$String* Printer::visitOperatorSymbol($Symbol$OperatorSymbol* s, $Locale* locale) {
	return visitMethodSymbol(static_cast<$Symbol$MethodSymbol*>(s), locale);
}

$String* Printer::visitPackageSymbol($Symbol$PackageSymbol* s, $Locale* locale) {
	return $nc(s)->isUnnamed() ? localize(locale, "compiler.misc.unnamed.package"_s, $$new($ObjectArray, 0)) : $nc($nc(s)->fullname)->toString();
}

$String* Printer::visitTypeSymbol($Symbol$TypeSymbol* s, $Locale* locale) {
	return visitSymbol(static_cast<$Symbol*>(s), locale);
}

$String* Printer::visitVarSymbol($Symbol$VarSymbol* s, $Locale* locale) {
	return visitSymbol(static_cast<$Symbol*>(s), locale);
}

$String* Printer::visitSymbol($Symbol* s, $Locale* locale) {
	return $nc($nc(s)->name)->toString();
}

$Object* Printer::visitType($Type* t, Object$* locale) {
	return $of(this->visitType(t, $cast($Locale, locale)));
}

$Object* Printer::visitErrorType($Type$ErrorType* t, Object$* locale) {
	return $of(this->visitErrorType(t, $cast($Locale, locale)));
}

$Object* Printer::visitUndetVar($Type$UndetVar* t, Object$* locale) {
	return $of(this->visitUndetVar(t, $cast($Locale, locale)));
}

$Object* Printer::visitForAll($Type$ForAll* t, Object$* locale) {
	return $of(this->visitForAll(t, $cast($Locale, locale)));
}

$Object* Printer::visitCapturedType($Type$CapturedType* t, Object$* locale) {
	return $of(this->visitCapturedType(t, $cast($Locale, locale)));
}

$Object* Printer::visitTypeVar($Type$TypeVar* t, Object$* locale) {
	return $of(this->visitTypeVar(t, $cast($Locale, locale)));
}

$Object* Printer::visitModuleType($Type$ModuleType* t, Object$* locale) {
	return $of(this->visitModuleType(t, $cast($Locale, locale)));
}

$Object* Printer::visitPackageType($Type$PackageType* t, Object$* locale) {
	return $of(this->visitPackageType(t, $cast($Locale, locale)));
}

$Object* Printer::visitMethodType($Type$MethodType* t, Object$* locale) {
	return $of(this->visitMethodType(t, $cast($Locale, locale)));
}

$Object* Printer::visitArrayType($Type$ArrayType* t, Object$* locale) {
	return $of(this->visitArrayType(t, $cast($Locale, locale)));
}

$Object* Printer::visitWildcardType($Type$WildcardType* t, Object$* locale) {
	return $of(this->visitWildcardType(t, $cast($Locale, locale)));
}

$Object* Printer::visitClassType($Type$ClassType* t, Object$* locale) {
	return $of(this->visitClassType(t, $cast($Locale, locale)));
}

$Object* Printer::visitSymbol($Symbol* s, Object$* locale) {
	return $of(this->visitSymbol(s, $cast($Locale, locale)));
}

$Object* Printer::visitTypeSymbol($Symbol$TypeSymbol* s, Object$* locale) {
	return $of(this->visitTypeSymbol(s, $cast($Locale, locale)));
}

$Object* Printer::visitVarSymbol($Symbol$VarSymbol* s, Object$* locale) {
	return $of(this->visitVarSymbol(s, $cast($Locale, locale)));
}

$Object* Printer::visitOperatorSymbol($Symbol$OperatorSymbol* s, Object$* locale) {
	return $of(this->visitOperatorSymbol(s, $cast($Locale, locale)));
}

$Object* Printer::visitPackageSymbol($Symbol$PackageSymbol* s, Object$* locale) {
	return $of(this->visitPackageSymbol(s, $cast($Locale, locale)));
}

$Object* Printer::visitMethodSymbol($Symbol$MethodSymbol* s, Object$* locale) {
	return $of(this->visitMethodSymbol(s, $cast($Locale, locale)));
}

$Object* Printer::visitClassSymbol($Symbol$ClassSymbol* sym, Object$* locale) {
	return $of(this->visitClassSymbol(sym, $cast($Locale, locale)));
}

Printer::Printer() {
}

$Class* Printer::load$($String* name, bool initialize) {
	$loadClass(Printer, name, initialize, &_Printer_ClassInfo_, allocate$Printer);
	return class$;
}

$Class* Printer::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com