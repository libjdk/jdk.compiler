#include <com/sun/tools/sjavac/Source$1.h>

#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/Util.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CONTINUE

using $Module = ::com::sun::tools::sjavac::Module;
using $Source = ::com::sun::tools::sjavac::Source;
using $Util = ::com::sun::tools::sjavac::Util;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Source$1$$Lambda$lambda$visitFile$0 : public $Predicate {
	$class(Source$1$$Lambda$lambda$visitFile$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Path* relToRoot) {
		$set(this, relToRoot, relToRoot);
	}
	virtual bool test(Object$* im) override {
		 return Source$1::lambda$visitFile$0(relToRoot, $cast($PathMatcher, im));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Source$1$$Lambda$lambda$visitFile$0>());
	}
	$Path* relToRoot = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Source$1$$Lambda$lambda$visitFile$0::fieldInfos[2] = {
	{"relToRoot", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(Source$1$$Lambda$lambda$visitFile$0, relToRoot)},
	{}
};
$MethodInfo Source$1$$Lambda$lambda$visitFile$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(Source$1$$Lambda$lambda$visitFile$0::*)($Path*)>(&Source$1$$Lambda$lambda$visitFile$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Source$1$$Lambda$lambda$visitFile$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.Source$1$$Lambda$lambda$visitFile$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Source$1$$Lambda$lambda$visitFile$0::load$($String* name, bool initialize) {
	$loadClass(Source$1$$Lambda$lambda$visitFile$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Source$1$$Lambda$lambda$visitFile$0::class$ = nullptr;

$FieldInfo _Source$1_FieldInfo_[] = {
	{"val$inGensrc", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$inGensrc)},
	{"val$inLinksrc", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$inLinksrc)},
	{"val$currentModule", "Lcom/sun/tools/sjavac/Module;", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$currentModule)},
	{"val$foundFiles", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$foundFiles)},
	{"val$suffixes", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$suffixes)},
	{"val$excludeMatchers", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$excludeMatchers)},
	{"val$includeMatchers", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$includeMatchers)},
	{"val$root", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Source$1, val$root)},
	{}
};

$MethodInfo _Source$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;Ljava/util/List;Ljava/util/List;Ljava/util/Set;Ljava/util/Map;Lcom/sun/tools/sjavac/Module;ZZ)V", nullptr, 0, $method(static_cast<void(Source$1::*)($File*,$List*,$List*,$Set*,$Map*,$Module*,bool,bool)>(&Source$1::init$))},
	{"lambda$visitFile$0", "(Ljava/nio/file/Path;Ljava/nio/file/PathMatcher;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Path*,$PathMatcher*)>(&Source$1::lambda$visitFile$0))},
	{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Source$1_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.Source",
	"scanRoot",
	"(Ljava/io/File;Ljava/util/Set;Ljava/util/List;Ljava/util/List;Ljava/util/Map;Ljava/util/Map;Lcom/sun/tools/sjavac/Module;ZZZ)V"
};

$InnerClassInfo _Source$1_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.Source$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Source$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.Source$1",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	_Source$1_FieldInfo_,
	_Source$1_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_Source$1_EnclosingMethodInfo_,
	_Source$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.Source"
};

$Object* allocate$Source$1($Class* clazz) {
	return $of($alloc(Source$1));
}

void Source$1::init$($File* val$root, $List* val$includeMatchers, $List* val$excludeMatchers, $Set* val$suffixes, $Map* val$foundFiles, $Module* val$currentModule, bool val$inLinksrc, bool val$inGensrc) {
	$set(this, val$root, val$root);
	$set(this, val$includeMatchers, val$includeMatchers);
	$set(this, val$excludeMatchers, val$excludeMatchers);
	$set(this, val$suffixes, val$suffixes);
	$set(this, val$foundFiles, val$foundFiles);
	$set(this, val$currentModule, val$currentModule);
	this->val$inLinksrc = val$inLinksrc;
	this->val$inGensrc = val$inGensrc;
	$SimpleFileVisitor::init$();
}

$FileVisitResult* Source$1::visitFile($Path* file, $BasicFileAttributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, relToRoot, $nc($($nc(this->val$root)->toPath()))->relativize(file));
	bool var$1 = $nc($($nc(this->val$includeMatchers)->stream()))->anyMatch(static_cast<$Predicate*>($$new(Source$1$$Lambda$lambda$visitFile$0, relToRoot)));
	bool var$0 = var$1 && $nc($($nc(this->val$excludeMatchers)->stream()))->noneMatch(static_cast<$Predicate*>($$new(Source$1$$Lambda$lambda$visitFile$0, relToRoot)));
	if (var$0 && $nc(this->val$suffixes)->contains($($Util::fileSuffix(file)))) {
		$var($Source, existing, $cast($Source, $nc(this->val$foundFiles)->get(file)));
		if (existing != nullptr) {
			$var($String, var$2, $$str({"You have already added the file "_s, file, " from "_s}));
			$throwNew($IOException, $$concat(var$2, $($nc($(existing->file()))->getPath())));
		}
		$assign(existing, $nc(this->val$currentModule)->lookupSource($($nc(file)->toString())));
		if (existing != nullptr) {
			if (this->val$inLinksrc) {
				if (existing->isLinkedOnly()) {
					$var($String, var$3, $$str({"You have already added the link only file "_s, file, " from "_s}));
					$throwNew($IOException, $$concat(var$3, $($nc($(existing->file()))->getPath())));
				}
				$nc(this->val$foundFiles)->put($($nc(file)->toString()), existing);
			} else {
				$var($String, var$4, $$str({"Internal error: Double add of file "_s, file, " from "_s}));
				$throwNew($IOException, $$concat(var$4, $($nc($(existing->file()))->getPath())));
			}
		} else {
			$var($Module, var$5, this->val$currentModule);
			$var($String, var$6, $nc(file)->toString());
			$var($Source, s, $new($Source, var$5, var$6, $(file->toFile())));
			if (this->val$inGensrc) {
				s->markAsGenerated();
			}
			if (this->val$inLinksrc) {
				s->markAsLinkedOnly();
			}
			$var($String, pkg, $Source::packageOfJavaFile($($nc(this->val$root)->toPath()), file));
			$assign(pkg, $str({$($nc(this->val$currentModule)->name()), ":"_s, pkg}));
			$nc(this->val$foundFiles)->put($($nc(file)->toString()), s);
			$nc(this->val$currentModule)->addSource(pkg, s);
		}
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* Source$1::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

bool Source$1::lambda$visitFile$0($Path* relToRoot, $PathMatcher* im) {
	$init(Source$1);
	return $nc(im)->matches(relToRoot);
}

Source$1::Source$1() {
}

$Class* Source$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Source$1$$Lambda$lambda$visitFile$0::classInfo$.name)) {
			return Source$1$$Lambda$lambda$visitFile$0::load$(name, initialize);
		}
	}
	$loadClass(Source$1, name, initialize, &_Source$1_ClassInfo_, allocate$Source$1);
	return class$;
}

$Class* Source$1::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com