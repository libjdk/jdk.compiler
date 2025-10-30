#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASSFILE

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeKind = ::com::sun::tools::javac::jvm::ClassReader$AttributeKind;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$AttributeReader_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$AttributeReader, this$0)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED | $FINAL, $field(ClassReader$AttributeReader, name)},
	{"version", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PROTECTED | $FINAL, $field(ClassReader$AttributeReader, version)},
	{"kinds", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;", $PROTECTED | $FINAL, $field(ClassReader$AttributeReader, kinds)},
	{}
};

$MethodInfo _ClassReader$AttributeReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;)V", $PROTECTED, $method(static_cast<void(ClassReader$AttributeReader::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$AttributeReader::init$))},
	{"accepts", "(Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;)Z", nullptr, $PROTECTED},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _ClassReader$AttributeReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$AttributeReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	"java.lang.Object",
	nullptr,
	_ClassReader$AttributeReader_FieldInfo_,
	_ClassReader$AttributeReader_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$AttributeReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$AttributeReader($Class* clazz) {
	return $of($alloc(ClassReader$AttributeReader));
}

void ClassReader$AttributeReader::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$set(this, name, name);
	$set(this, version, version);
	$set(this, kinds, kinds);
}

bool ClassReader$AttributeReader::accepts($ClassReader$AttributeKind* kind) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->kinds)->contains(kind)) {
		if (this->this$0->majorVersion > this->version->major || (this->this$0->majorVersion == this->version->major && this->this$0->minorVersion >= this->version->minor)) {
			return true;
		}
		if (this->this$0->lintClassfile && !$nc(this->this$0->warnedAttrs)->contains(this->name)) {
			$var($JavaFileObject, prev, $nc(this->this$0->log)->useSource(this->this$0->currentClassFile));
			{
				$var($Throwable, var$0, nullptr);
				try {
					$init($Lint$LintCategory);
					$nc(this->this$0->log)->warning($Lint$LintCategory::CLASSFILE, ($JCDiagnostic$DiagnosticPosition*)nullptr, $($CompilerProperties$Warnings::FutureAttr(this->name, this->version->major, this->version->minor, this->this$0->majorVersion, this->this$0->minorVersion)));
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$nc(this->this$0->log)->useSource(prev);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			$nc(this->this$0->warnedAttrs)->add(this->name);
		}
	}
	return false;
}

ClassReader$AttributeReader::ClassReader$AttributeReader() {
}

$Class* ClassReader$AttributeReader::load$($String* name, bool initialize) {
	$loadClass(ClassReader$AttributeReader, name, initialize, &_ClassReader$AttributeReader_ClassInfo_, allocate$ClassReader$AttributeReader);
	return class$;
}

$Class* ClassReader$AttributeReader::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com