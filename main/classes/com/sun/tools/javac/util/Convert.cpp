#include <com/sun/tools/javac/util/Convert.h>

#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef MAX_VALUE

using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Convert_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Convert::*)()>(&Convert::init$))},
	{"chars2utf", "([CI[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,$bytes*,int32_t,int32_t)>(&Convert::chars2utf))},
	{"chars2utf", "([CII)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($chars*,int32_t,int32_t)>(&Convert::chars2utf))},
	{"chars2utf", "([C)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($chars*)>(&Convert::chars2utf))},
	{"classCandidates", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Name*)>(&Convert::classCandidates))},
	{"enclosingCandidates", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Name*)>(&Convert::enclosingCandidates))},
	{"escapeUnicode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Convert::escapeUnicode))},
	{"isPrintableAscii", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Convert::isPrintableAscii))},
	{"packagePart", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($Name*)>(&Convert::packagePart))},
	{"packagePart", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Convert::packagePart))},
	{"quote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Convert::quote))},
	{"quote", "(C)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(char16_t)>(&Convert::quote))},
	{"shortName", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($Name*)>(&Convert::shortName))},
	{"shortName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Convert::shortName))},
	{"string2int", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&Convert::string2int)), "java.lang.NumberFormatException"},
	{"string2long", "(Ljava/lang/String;I)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($String*,int32_t)>(&Convert::string2long)), "java.lang.NumberFormatException"},
	{"string2utf", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&Convert::string2utf))},
	{"utf2chars", "([BI[CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,$chars*,int32_t,int32_t)>(&Convert::utf2chars))},
	{"utf2chars", "([BII)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($bytes*,int32_t,int32_t)>(&Convert::utf2chars))},
	{"utf2chars", "([B)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($bytes*)>(&Convert::utf2chars))},
	{"utf2string", "([BII)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*,int32_t,int32_t)>(&Convert::utf2string))},
	{"utf2string", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Convert::utf2string))},
	{}
};

$ClassInfo _Convert_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Convert",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Convert_MethodInfo_
};

$Object* allocate$Convert($Class* clazz) {
	return $of($alloc(Convert));
}

void Convert::init$() {
}

int32_t Convert::string2int($String* s, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	if (radix == 10) {
		return $Integer::parseInt(s, radix);
	} else {
		$var($chars, cs, $nc(s)->toCharArray());
		int32_t limit = $div($Integer::MAX_VALUE, (radix / 2));
		int32_t n = 0;
		{
			$var($chars, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t c = arr$->get(i$);
				{
					int32_t d = $Character::digit(c, radix);
					if (n < 0 || n > limit || n * radix > $Integer::MAX_VALUE - d) {
						$throwNew($NumberFormatException);
					}
					n = n * radix + d;
				}
			}
		}
		return n;
	}
}

int64_t Convert::string2long($String* s, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	if (radix == 10) {
		return $Long::parseLong(s, radix);
	} else {
		$var($chars, cs, $nc(s)->toCharArray());
		int64_t limit = $div($Long::MAX_VALUE, (radix / 2));
		int64_t n = 0;
		{
			$var($chars, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t c = arr$->get(i$);
				{
					int32_t d = $Character::digit(c, radix);
					if (n < 0 || n > limit || n * radix > $Long::MAX_VALUE - d) {
						$throwNew($NumberFormatException);
					}
					n = n * radix + d;
				}
			}
		}
		return n;
	}
}

int32_t Convert::utf2chars($bytes* src, int32_t sindex, $chars* dst, int32_t dindex, int32_t len) {
	int32_t i = sindex;
	int32_t j = dindex;
	int32_t limit = sindex + len;
	while (i < limit) {
		int32_t b = (int32_t)($nc(src)->get(i++) & (uint32_t)255);
		if (b >= 224) {
			b = ((int32_t)(b & (uint32_t)15)) << 12;
			b = b | (((int32_t)(src->get(i++) & (uint32_t)63)) << 6);
			b = b | ((int32_t)(src->get(i++) & (uint32_t)63));
		} else if (b >= 192) {
			b = ((int32_t)(b & (uint32_t)31)) << 6;
			b = b | ((int32_t)(src->get(i++) & (uint32_t)63));
		}
		$nc(dst)->set(j++, (char16_t)b);
	}
	return j;
}

$chars* Convert::utf2chars($bytes* src, int32_t sindex, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($chars, dst, $new($chars, len));
	int32_t len1 = utf2chars(src, sindex, dst, 0, len);
	$var($chars, result, $new($chars, len1));
	$System::arraycopy(dst, 0, result, 0, len1);
	return result;
}

$chars* Convert::utf2chars($bytes* src) {
	return utf2chars(src, 0, $nc(src)->length);
}

$String* Convert::utf2string($bytes* src, int32_t sindex, int32_t len) {
	$var($chars, dst, $new($chars, len));
	int32_t len1 = utf2chars(src, sindex, dst, 0, len);
	return $new($String, dst, 0, len1);
}

$String* Convert::utf2string($bytes* src) {
	return utf2string(src, 0, $nc(src)->length);
}

int32_t Convert::chars2utf($chars* src, int32_t sindex, $bytes* dst, int32_t dindex, int32_t len) {
	int32_t j = dindex;
	int32_t limit = sindex + len;
	for (int32_t i = sindex; i < limit; ++i) {
		char16_t ch = $nc(src)->get(i);
		if (1 <= ch && ch <= 127) {
			$nc(dst)->set(j++, (int8_t)ch);
		} else if (ch <= 2047) {
			$nc(dst)->set(j++, (int8_t)(192 | (ch >> 6)));
			dst->set(j++, (int8_t)(128 | ((int32_t)(ch & (uint32_t)63))));
		} else {
			$nc(dst)->set(j++, (int8_t)(224 | (ch >> 12)));
			dst->set(j++, (int8_t)(128 | ((int32_t)((ch >> 6) & (uint32_t)63))));
			dst->set(j++, (int8_t)(128 | ((int32_t)(ch & (uint32_t)63))));
		}
	}
	return j;
}

$bytes* Convert::chars2utf($chars* src, int32_t sindex, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, dst, $new($bytes, len * 3));
	int32_t len1 = chars2utf(src, sindex, dst, 0, len);
	$var($bytes, result, $new($bytes, len1));
	$System::arraycopy(dst, 0, result, 0, len1);
	return result;
}

$bytes* Convert::chars2utf($chars* src) {
	return chars2utf(src, 0, $nc(src)->length);
}

$bytes* Convert::string2utf($String* s) {
	return chars2utf($($nc(s)->toCharArray()));
}

$String* Convert::quote($String* s) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		buf->append($(quote(s->charAt(i))));
	}
	return buf->toString();
}

$String* Convert::quote(char16_t ch) {
	$useLocalCurrentObjectStackCache();
	switch (ch) {
	case u'\b':
		{
			return "\\b"_s;
		}
	case u'\f':
		{
			return "\\f"_s;
		}
	case u'\n':
		{
			return "\\n"_s;
		}
	case u'\r':
		{
			return "\\r"_s;
		}
	case u'\t':
		{
			return "\\t"_s;
		}
	case u'\'':
		{
			return "\\\'"_s;
		}
	case u'\"':
		{
			return "\\\""_s;
		}
	case u'\\':
		{
			return "\\\\"_s;
		}
	default:
		{
			return (isPrintableAscii(ch)) ? $String::valueOf(ch) : $String::format("\\u%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf((int32_t)ch)))}));
		}
	}
}

bool Convert::isPrintableAscii(char16_t ch) {
	return ch >= u' ' && ch <= u'~';
}

$String* Convert::escapeUnicode($String* s$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, s$renamed);
	int32_t len = $nc(s)->length();
	int32_t i = 0;
	while (i < len) {
		char16_t ch = s->charAt(i);
		if (ch > 255) {
			$var($StringBuilder, buf, $new($StringBuilder));
			buf->append($(s->substring(0, i)));
			while (i < len) {
				ch = s->charAt(i);
				if (ch > 255) {
					buf->append("\\u"_s);
					buf->append($Character::forDigit((ch >> 12) % 16, 16));
					buf->append($Character::forDigit((ch >> 8) % 16, 16));
					buf->append($Character::forDigit((ch >> 4) % 16, 16));
					buf->append($Character::forDigit((ch) % 16, 16));
				} else {
					buf->append(ch);
				}
				++i;
			}
			$assign(s, buf->toString());
		} else {
			++i;
		}
	}
	return s;
}

$Name* Convert::shortName($Name* name) {
	int32_t start = $nc(name)->lastIndexOf((int8_t)u'.') + 1;
	int32_t end = name->getByteLength();
	if (start == 0 && end == name->length()) {
		return name;
	}
	int32_t var$0 = name->lastIndexOf((int8_t)u'.') + 1;
	return name->subName(var$0, name->getByteLength());
}

$String* Convert::shortName($String* name) {
	return $nc(name)->substring(name->lastIndexOf((int32_t)u'.') + 1);
}

$Name* Convert::packagePart($Name* classname) {
	return $nc(classname)->subName(0, classname->lastIndexOf((int8_t)u'.'));
}

$String* Convert::packagePart($String* classname) {
	int32_t lastDot = $nc(classname)->lastIndexOf((int32_t)u'.');
	return (lastDot < 0 ? ""_s : classname->substring(0, lastDot));
}

$List* Convert::enclosingCandidates($Name* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, name$renamed);
	$var($List, names, $List::nil());
	int32_t index = 0;
	while ((index = $nc(name)->lastIndexOf((int8_t)u'$')) > 0) {
		$assign(name, name->subName(0, index));
		$assign(names, $nc(names)->prepend(name));
	}
	return names;
}

$List* Convert::classCandidates($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var($List, names, $List::nil());
	$var($String, nameStr, $nc(name)->toString());
	int32_t index = -1;
	while ((index = $nc(nameStr)->indexOf((int32_t)u'.', index + 1)) > 0) {
		$var($String, pack, nameStr->substring(0, index + 1));
		$var($String, clz, $(nameStr->substring(index + 1))->replace(u'.', u'$'));
		$assign(names, $nc(names)->prepend($($nc($nc(name->table)->names)->fromString($$str({pack, clz})))));
	}
	return $nc(names)->reverse();
}

Convert::Convert() {
}

$Class* Convert::load$($String* name, bool initialize) {
	$loadClass(Convert, name, initialize, &_Convert_ClassInfo_, allocate$Convert);
	return class$;
}

$Class* Convert::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com