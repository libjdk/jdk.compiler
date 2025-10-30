#include <com/sun/tools/javac/util/Warner.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Warner_FieldInfo_[] = {
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $field(Warner, pos$)},
	{"warned", "Z", nullptr, $PROTECTED, $field(Warner, warned)},
	{"nonSilentLintSet", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE, $field(Warner, nonSilentLintSet)},
	{"silentLintSet", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE, $field(Warner, silentLintSet)},
	{}
};

$MethodInfo _Warner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Warner::*)($JCDiagnostic$DiagnosticPosition*)>(&Warner::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Warner::*)()>(&Warner::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"hasLint", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC},
	{"hasNonSilentLint", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC},
	{"hasSilentLint", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC},
	{"pos", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC},
	{"silentWarn", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PUBLIC},
	{"warn", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Warner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Warner",
	"java.lang.Object",
	nullptr,
	_Warner_FieldInfo_,
	_Warner_MethodInfo_
};

$Object* allocate$Warner($Class* clazz) {
	return $of($alloc(Warner));
}

$JCDiagnostic$DiagnosticPosition* Warner::pos() {
	return this->pos$;
}

void Warner::warn($Lint$LintCategory* lint) {
	$nc(this->nonSilentLintSet)->add(lint);
}

void Warner::silentWarn($Lint$LintCategory* lint) {
	$nc(this->silentLintSet)->add(lint);
}

void Warner::init$($JCDiagnostic$DiagnosticPosition* pos) {
	$set(this, pos$, nullptr);
	this->warned = false;
	$load($Lint$LintCategory);
	$set(this, nonSilentLintSet, $EnumSet::noneOf($Lint$LintCategory::class$));
	$set(this, silentLintSet, $EnumSet::noneOf($Lint$LintCategory::class$));
	$set(this, pos$, pos);
}

bool Warner::hasSilentLint($Lint$LintCategory* lint) {
	return $nc(this->silentLintSet)->contains(lint);
}

bool Warner::hasNonSilentLint($Lint$LintCategory* lint) {
	return $nc(this->nonSilentLintSet)->contains(lint);
}

bool Warner::hasLint($Lint$LintCategory* lint) {
	bool var$0 = hasSilentLint(lint);
	return var$0 || hasNonSilentLint(lint);
}

void Warner::clear() {
	$nc(this->nonSilentLintSet)->clear();
	$nc(this->silentLintSet)->clear();
	this->warned = false;
}

void Warner::init$() {
	Warner::init$(nullptr);
}

Warner::Warner() {
}

$Class* Warner::load$($String* name, bool initialize) {
	$loadClass(Warner, name, initialize, &_Warner_ClassInfo_, allocate$Warner);
	return class$;
}

$Class* Warner::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com