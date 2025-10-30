#include <com/sun/tools/sjavac/options/Options$1StateArgs.h>

#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/options/SourceLocation.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef I
#undef X

using $Option = ::com::sun::tools::sjavac::options::Option;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $SourceLocation = ::com::sun::tools::sjavac::options::SourceLocation;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$FieldInfo _Options$1StateArgs_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/sjavac/options/Options;", nullptr, $FINAL | $SYNTHETIC, $field(Options$1StateArgs, this$0)},
	{"args", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(Options$1StateArgs, args)},
	{}
};

$MethodInfo _Options$1StateArgs_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, 0, $method(static_cast<void(Options$1StateArgs::*)($Options*)>(&Options$1StateArgs::init$))},
	{"addAll", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC},
	{"addArg", "(Lcom/sun/tools/sjavac/options/Option;)V", nullptr, 0},
	{"addArg", "(Lcom/sun/tools/sjavac/options/Option;Ljava/lang/Object;)V", nullptr, 0},
	{"addSourceLocations", "(Lcom/sun/tools/sjavac/options/Option;Ljava/util/List;)V", "(Lcom/sun/tools/sjavac/options/Option;Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;)V", 0},
	{"getResult", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Options$1StateArgs_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Options",
	"getStateArgsString",
	"()Ljava/lang/String;"
};

$InnerClassInfo _Options$1StateArgs_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Options$1StateArgs", nullptr, "StateArgs", 0},
	{}
};

$ClassInfo _Options$1StateArgs_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.options.Options$1StateArgs",
	"java.lang.Object",
	nullptr,
	_Options$1StateArgs_FieldInfo_,
	_Options$1StateArgs_MethodInfo_,
	nullptr,
	&_Options$1StateArgs_EnclosingMethodInfo_,
	_Options$1StateArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Options"
};

$Object* allocate$Options$1StateArgs($Class* clazz) {
	return $of($alloc(Options$1StateArgs));
}

void Options$1StateArgs::init$($Options* this$0) {
	$set(this, this$0, this$0);
	$set(this, args, $new($ArrayList));
}

void Options$1StateArgs::addArg($Option* opt) {
	$nc(this->args)->add($nc(opt)->arg);
}

void Options$1StateArgs::addArg($Option* opt, Object$* val) {
	addArg(opt);
	$nc(this->args)->add($($nc($of(val))->toString()));
}

void Options$1StateArgs::addSourceLocations($Option* opt, $List* locs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(locs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SourceLocation, sl, $cast($SourceLocation, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($nc(sl)->includes)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						$init($Option);
						addArg($Option::I, pkg);
					}
				}
				{
					$var($Iterator, i$, $nc(sl->excludes)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						$init($Option);
						addArg($Option::X, pkg);
					}
				}
				addArg(opt, $(sl->getPath()));
			}
		}
	}
}

$String* Options$1StateArgs::getResult() {
	return $String::join(static_cast<$CharSequence*>(" "_s), static_cast<$Iterable*>(this->args));
}

void Options$1StateArgs::addAll($Collection* toAdd) {
	$nc(this->args)->addAll(toAdd);
}

Options$1StateArgs::Options$1StateArgs() {
}

$Class* Options$1StateArgs::load$($String* name, bool initialize) {
	$loadClass(Options$1StateArgs, name, initialize, &_Options$1StateArgs_ClassInfo_, allocate$Options$1StateArgs);
	return class$;
}

$Class* Options$1StateArgs::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com