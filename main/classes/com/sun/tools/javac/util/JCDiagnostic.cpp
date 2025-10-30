#include <com/sun/tools/javac/util/JCDiagnostic.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$1.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$SourcePosition.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef MANDATORY
#undef MANDATORY_WARNING
#undef NOPOS
#undef NOTE
#undef OTHER
#undef RECOVERABLE
#undef WARNING

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $BasicDiagnosticFormatter = ::com::sun::tools::javac::util::BasicDiagnosticFormatter;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic$1 = ::com::sun::tools::javac::util::JCDiagnostic$1;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$SourcePosition = ::com::sun::tools::javac::util::JCDiagnostic$SourcePosition;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $Diagnostic = ::javax::tools::Diagnostic;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$CompoundAttribute _JCDiagnostic_FieldAnnotations_fragmentFormatter[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JCDiagnostic_MethodAnnotations_fragment1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JCDiagnostic_MethodAnnotations_getFragmentFormatter8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _JCDiagnostic_FieldInfo_[] = {
	{"source", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic, source)},
	{"position", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic, position)},
	{"diagnosticInfo", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic, diagnosticInfo)},
	{"flags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;>;", $PRIVATE | $FINAL, $field(JCDiagnostic, flags)},
	{"lintCategory", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic, lintCategory)},
	{"sourcePosition", "Lcom/sun/tools/javac/util/JCDiagnostic$SourcePosition;", nullptr, $PRIVATE, $field(JCDiagnostic, sourcePosition)},
	{"defaultFormatter", "Lcom/sun/tools/javac/api/DiagnosticFormatter;", "Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE, $field(JCDiagnostic, defaultFormatter)},
	{"fragmentFormatter", "Lcom/sun/tools/javac/api/DiagnosticFormatter;", "Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE | $STATIC | $DEPRECATED, $staticField(JCDiagnostic, fragmentFormatter), _JCDiagnostic_FieldAnnotations_fragmentFormatter},
	{}
};

$MethodInfo _JCDiagnostic_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/DiagnosticFormatter;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;Lcom/sun/tools/javac/code/Lint$LintCategory;Ljava/util/Set;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", "(Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;Lcom/sun/tools/javac/code/Lint$LintCategory;Ljava/util/Set<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;>;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", $PROTECTED, $method(static_cast<void(JCDiagnostic::*)($DiagnosticFormatter*,$JCDiagnostic$DiagnosticInfo*,$Lint$LintCategory*,$Set*,$DiagnosticSource*,$JCDiagnostic$DiagnosticPosition*)>(&JCDiagnostic::init$))},
	{"fragment", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $STATIC | $TRANSIENT | $DEPRECATED, $method(static_cast<JCDiagnostic*(*)($String*,$ObjectArray*)>(&JCDiagnostic::fragment)), nullptr, nullptr, _JCDiagnostic_MethodAnnotations_fragment1},
	{"getArgs", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getCode", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getColumnNumber", "()J", nullptr, $PUBLIC},
	{"getDiagnosticPosition", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC},
	{"getDiagnosticSource", "()Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PUBLIC},
	{"getEndPosition", "()J", nullptr, $PUBLIC},
	{"getFragmentFormatter", "()Lcom/sun/tools/javac/api/DiagnosticFormatter;", "()Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$DiagnosticFormatter*(*)()>(&JCDiagnostic::getFragmentFormatter)), nullptr, nullptr, _JCDiagnostic_MethodAnnotations_getFragmentFormatter8},
	{"getIntEndPosition", "()I", nullptr, $PROTECTED},
	{"getIntPosition", "()I", nullptr, $PROTECTED},
	{"getIntStartPosition", "()I", nullptr, $PROTECTED},
	{"getKind", "()Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC},
	{"getLineNumber", "()J", nullptr, $PUBLIC},
	{"getLintCategory", "()Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC},
	{"getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPosition", "()J", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefix", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSource", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getStartPosition", "()J", nullptr, $PUBLIC},
	{"getSubdiagnostics", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PUBLIC},
	{"getType", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC},
	{"hasLintCategory", "()Z", nullptr, $PUBLIC},
	{"isFlagSet", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;)Z", nullptr, $PUBLIC},
	{"isMandatory", "()Z", nullptr, $PUBLIC},
	{"isMultiline", "()Z", nullptr, $PUBLIC},
	{"setFlag", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCDiagnostic_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.util.JCDiagnostic$MultilineDiagnostic", "com.sun.tools.javac.util.JCDiagnostic", "MultilineDiagnostic", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.JCDiagnostic$Fragment", "com.sun.tools.javac.util.JCDiagnostic", "Fragment", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$Note", "com.sun.tools.javac.util.JCDiagnostic", "Note", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$Warning", "com.sun.tools.javac.util.JCDiagnostic", "Warning", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$Error", "com.sun.tools.javac.util.JCDiagnostic", "Error", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.JCDiagnostic$SourcePosition", "com.sun.tools.javac.util.JCDiagnostic", "SourcePosition", 0},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticFlag", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.JCDiagnostic$SimpleDiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "SimpleDiagnosticPosition", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticType", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.JCDiagnostic$Factory", "com.sun.tools.javac.util.JCDiagnostic", "Factory", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCDiagnostic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic",
	"java.lang.Object",
	"javax.tools.Diagnostic",
	_JCDiagnostic_FieldInfo_,
	_JCDiagnostic_MethodInfo_,
	"Ljava/lang/Object;Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;",
	nullptr,
	_JCDiagnostic_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic$1,com.sun.tools.javac.util.JCDiagnostic$MultilineDiagnostic,com.sun.tools.javac.util.JCDiagnostic$Fragment,com.sun.tools.javac.util.JCDiagnostic$Note,com.sun.tools.javac.util.JCDiagnostic$Warning,com.sun.tools.javac.util.JCDiagnostic$Error,com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo,com.sun.tools.javac.util.JCDiagnostic$SourcePosition,com.sun.tools.javac.util.JCDiagnostic$DiagnosticFlag,com.sun.tools.javac.util.JCDiagnostic$SimpleDiagnosticPosition,com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition,com.sun.tools.javac.util.JCDiagnostic$DiagnosticType,com.sun.tools.javac.util.JCDiagnostic$Factory"
};

$Object* allocate$JCDiagnostic($Class* clazz) {
	return $of($alloc(JCDiagnostic));
}

$DiagnosticFormatter* JCDiagnostic::fragmentFormatter = nullptr;

JCDiagnostic* JCDiagnostic::fragment($String* key, $ObjectArray* args) {
	$init(JCDiagnostic);
	$useLocalCurrentObjectStackCache();
	$var($DiagnosticFormatter, var$0, getFragmentFormatter());
	$init($JCDiagnostic$DiagnosticType);
	$var($JCDiagnostic$DiagnosticInfo, var$1, $JCDiagnostic$DiagnosticInfo::of($JCDiagnostic$DiagnosticType::FRAGMENT, "compiler"_s, key, args));
	$load($JCDiagnostic$DiagnosticFlag);
	return $new(JCDiagnostic, var$0, var$1, nullptr, $($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$)), nullptr, nullptr);
}

$DiagnosticFormatter* JCDiagnostic::getFragmentFormatter() {
	$init(JCDiagnostic);
	if (JCDiagnostic::fragmentFormatter == nullptr) {
		$assignStatic(JCDiagnostic::fragmentFormatter, $new($BasicDiagnosticFormatter, $($JavacMessages::getDefaultMessages())));
	}
	return JCDiagnostic::fragmentFormatter;
}

void JCDiagnostic::init$($DiagnosticFormatter* formatter, $JCDiagnostic$DiagnosticInfo* diagnosticInfo, $Lint$LintCategory* lc, $Set* flags, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos) {
	if (source == nullptr && pos != nullptr && pos->getPreferredPosition() != $Position::NOPOS) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, defaultFormatter, formatter);
	$set(this, diagnosticInfo, diagnosticInfo);
	$set(this, lintCategory, lc);
	$set(this, flags, flags);
	$set(this, source, source);
	$set(this, position, pos);
}

$JCDiagnostic$DiagnosticType* JCDiagnostic::getType() {
	return $nc(this->diagnosticInfo)->type;
}

$List* JCDiagnostic::getSubdiagnostics() {
	return $List::nil();
}

bool JCDiagnostic::isMultiline() {
	return false;
}

bool JCDiagnostic::isMandatory() {
	$init($JCDiagnostic$DiagnosticFlag);
	return $nc(this->flags)->contains($JCDiagnostic$DiagnosticFlag::MANDATORY);
}

bool JCDiagnostic::hasLintCategory() {
	return (this->lintCategory != nullptr);
}

$Lint$LintCategory* JCDiagnostic::getLintCategory() {
	return this->lintCategory;
}

$Object* JCDiagnostic::getSource() {
	if (this->source == nullptr) {
		return $of(nullptr);
	} else {
		return $of($nc(this->source)->getFile());
	}
}

$DiagnosticSource* JCDiagnostic::getDiagnosticSource() {
	return this->source;
}

int32_t JCDiagnostic::getIntStartPosition() {
	return (this->position == nullptr ? $Position::NOPOS : $nc(this->position)->getStartPosition());
}

int32_t JCDiagnostic::getIntPosition() {
	return (this->position == nullptr ? $Position::NOPOS : $nc(this->position)->getPreferredPosition());
}

int32_t JCDiagnostic::getIntEndPosition() {
	return (this->position == nullptr ? $Position::NOPOS : $nc(this->position)->getEndPosition($($nc(this->source)->getEndPosTable())));
}

int64_t JCDiagnostic::getStartPosition() {
	return getIntStartPosition();
}

int64_t JCDiagnostic::getPosition() {
	return getIntPosition();
}

int64_t JCDiagnostic::getEndPosition() {
	return getIntEndPosition();
}

$JCDiagnostic$DiagnosticPosition* JCDiagnostic::getDiagnosticPosition() {
	return this->position;
}

int64_t JCDiagnostic::getLineNumber() {
	if (this->sourcePosition == nullptr) {
		$set(this, sourcePosition, $new($JCDiagnostic$SourcePosition, this));
	}
	return $nc(this->sourcePosition)->getLineNumber();
}

int64_t JCDiagnostic::getColumnNumber() {
	if (this->sourcePosition == nullptr) {
		$set(this, sourcePosition, $new($JCDiagnostic$SourcePosition, this));
	}
	return $nc(this->sourcePosition)->getColumnNumber();
}

$ObjectArray* JCDiagnostic::getArgs() {
	return $nc(this->diagnosticInfo)->args;
}

$String* JCDiagnostic::getPrefix() {
	return getPrefix($nc(this->diagnosticInfo)->type);
}

$String* JCDiagnostic::getPrefix($JCDiagnostic$DiagnosticType* dt) {
	return $nc(this->defaultFormatter)->formatKind(this, $($Locale::getDefault()));
}

$String* JCDiagnostic::toString() {
	return $nc(this->defaultFormatter)->format(this, $($Locale::getDefault()));
}

$Diagnostic$Kind* JCDiagnostic::getKind() {
	$init($JCDiagnostic$1);
	switch ($nc($JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc(($nc(this->diagnosticInfo)->type))->ordinal())) {
	case 3:
		{
			$init($Diagnostic$Kind);
			return $Diagnostic$Kind::NOTE;
		}
	case 2:
		{
			$init($JCDiagnostic$DiagnosticFlag);
			$init($Diagnostic$Kind);
			return $nc(this->flags)->contains($JCDiagnostic$DiagnosticFlag::MANDATORY) ? $Diagnostic$Kind::MANDATORY_WARNING : $Diagnostic$Kind::WARNING;
		}
	case 1:
		{
			$init($Diagnostic$Kind);
			return $Diagnostic$Kind::ERROR;
		}
	default:
		{
			$init($Diagnostic$Kind);
			return $Diagnostic$Kind::OTHER;
		}
	}
}

$String* JCDiagnostic::getCode() {
	return $nc(this->diagnosticInfo)->key();
}

$String* JCDiagnostic::getMessage($Locale* locale) {
	return $nc(this->defaultFormatter)->formatMessage(this, locale);
}

void JCDiagnostic::setFlag($JCDiagnostic$DiagnosticFlag* flag) {
	$nc(this->flags)->add(flag);
	$init($JCDiagnostic$DiagnosticType);
	if ($nc(this->diagnosticInfo)->type == $JCDiagnostic$DiagnosticType::ERROR) {
		$init($JCDiagnostic$1);
		switch ($nc($JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag)->get($nc((flag))->ordinal())) {
		case 1:
			{
				$init($JCDiagnostic$DiagnosticFlag);
				$nc(this->flags)->remove($JCDiagnostic$DiagnosticFlag::RECOVERABLE);
				break;
			}
		case 2:
			{
				$init($JCDiagnostic$DiagnosticFlag);
				$nc(this->flags)->add($JCDiagnostic$DiagnosticFlag::RECOVERABLE);
				break;
			}
		}
	}
}

bool JCDiagnostic::isFlagSet($JCDiagnostic$DiagnosticFlag* flag) {
	return $nc(this->flags)->contains(flag);
}

JCDiagnostic::JCDiagnostic() {
}

$Class* JCDiagnostic::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic, name, initialize, &_JCDiagnostic_ClassInfo_, allocate$JCDiagnostic);
	return class$;
}

$Class* JCDiagnostic::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com