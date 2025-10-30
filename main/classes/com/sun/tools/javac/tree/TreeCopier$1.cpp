#include <com/sun/tools/javac/tree/TreeCopier$1.h>

#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef LETEXPR

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeCopier$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TreeCopier$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _TreeCopier$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeCopier",
	nullptr,
	nullptr
};

$InnerClassInfo _TreeCopier$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeCopier$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TreeCopier$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.TreeCopier$1",
	"java.lang.Object",
	nullptr,
	_TreeCopier$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TreeCopier$1_EnclosingMethodInfo_,
	_TreeCopier$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeCopier"
};

$Object* allocate$TreeCopier$1($Class* clazz) {
	return $of($alloc(TreeCopier$1));
}

$ints* TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$TreeCopier$1($Class* class$) {
	$assignStatic(TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LETEXPR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TreeCopier$1::TreeCopier$1() {
}

$Class* TreeCopier$1::load$($String* name, bool initialize) {
	$loadClass(TreeCopier$1, name, initialize, &_TreeCopier$1_ClassInfo_, clinit$TreeCopier$1, allocate$TreeCopier$1);
	return class$;
}

$Class* TreeCopier$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com