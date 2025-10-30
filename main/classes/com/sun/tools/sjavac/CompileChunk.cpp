#include <com/sun/tools/sjavac/CompileChunk.h>

#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _CompileChunk_FieldInfo_[] = {
	{"numPackages", "I", nullptr, $PUBLIC, $field(CompileChunk, numPackages)},
	{"numDependents", "I", nullptr, $PUBLIC, $field(CompileChunk, numDependents)},
	{"srcs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/URI;>;", $PUBLIC, $field(CompileChunk, srcs)},
	{"pkgNames", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(CompileChunk, pkgNames)},
	{"pkgFromTos", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CompileChunk, pkgFromTos)},
	{}
};

$MethodInfo _CompileChunk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompileChunk::*)()>(&CompileChunk::init$))},
	{"compareTo", "(Lcom/sun/tools/sjavac/CompileChunk;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equal", "(Lcom/sun/tools/sjavac/CompileChunk;)Z", nullptr, 0},
	{}
};

$ClassInfo _CompileChunk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.CompileChunk",
	"java.lang.Object",
	"java.lang.Comparable",
	_CompileChunk_FieldInfo_,
	_CompileChunk_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/sjavac/CompileChunk;>;"
};

$Object* allocate$CompileChunk($Class* clazz) {
	return $of($alloc(CompileChunk));
}

void CompileChunk::init$() {
	$set(this, srcs, $new($HashSet));
	$set(this, pkgNames, $new($StringBuilder));
	$set(this, pkgFromTos, ""_s);
}

int32_t CompileChunk::compareTo(CompileChunk* c) {
	if (this->numDependents == $nc(c)->numDependents) {
		return 0;
	}
	if (this->numDependents > $nc(c)->numDependents) {
		return -1;
	}
	return -1;
}

bool CompileChunk::equal(CompileChunk* c) {
	return this->numDependents == $nc(c)->numDependents;
}

int32_t CompileChunk::compareTo(Object$* c) {
	return this->compareTo($cast(CompileChunk, c));
}

CompileChunk::CompileChunk() {
}

$Class* CompileChunk::load$($String* name, bool initialize) {
	$loadClass(CompileChunk, name, initialize, &_CompileChunk_ClassInfo_, allocate$CompileChunk);
	return class$;
}

$Class* CompileChunk::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com