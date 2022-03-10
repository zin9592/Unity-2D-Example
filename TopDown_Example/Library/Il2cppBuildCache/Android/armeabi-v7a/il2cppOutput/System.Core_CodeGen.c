#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000012 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000013 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000015 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000016 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000024 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003D System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000003F TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000040 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000041 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000042 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000047 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000049 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004A System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004B System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004C System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000004D System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000004E System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004F System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000050 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000051 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000057 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000058 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005C T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000005D System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[94] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[94] = 
{
	1982,
	2065,
	2065,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[31] = 
{
	{ 0x02000004, { 55, 4 } },
	{ 0x02000005, { 59, 9 } },
	{ 0x02000006, { 70, 7 } },
	{ 0x02000007, { 79, 10 } },
	{ 0x02000008, { 91, 11 } },
	{ 0x02000009, { 105, 9 } },
	{ 0x0200000A, { 117, 12 } },
	{ 0x0200000B, { 132, 1 } },
	{ 0x0200000C, { 133, 2 } },
	{ 0x0200000D, { 135, 4 } },
	{ 0x0200000E, { 139, 21 } },
	{ 0x02000010, { 160, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 2 } },
	{ 0x0600000A, { 35, 4 } },
	{ 0x0600000B, { 39, 3 } },
	{ 0x0600000C, { 42, 1 } },
	{ 0x0600000D, { 43, 3 } },
	{ 0x0600000E, { 46, 2 } },
	{ 0x0600000F, { 48, 2 } },
	{ 0x06000010, { 50, 5 } },
	{ 0x06000020, { 68, 2 } },
	{ 0x06000025, { 77, 2 } },
	{ 0x0600002A, { 89, 2 } },
	{ 0x06000030, { 102, 3 } },
	{ 0x06000035, { 114, 3 } },
	{ 0x0600003A, { 129, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[162] = 
{
	{ (Il2CppRGCTXDataType)2, 1052 },
	{ (Il2CppRGCTXDataType)3, 3091 },
	{ (Il2CppRGCTXDataType)2, 1720 },
	{ (Il2CppRGCTXDataType)2, 1431 },
	{ (Il2CppRGCTXDataType)3, 5496 },
	{ (Il2CppRGCTXDataType)2, 1105 },
	{ (Il2CppRGCTXDataType)2, 1438 },
	{ (Il2CppRGCTXDataType)3, 5519 },
	{ (Il2CppRGCTXDataType)2, 1433 },
	{ (Il2CppRGCTXDataType)3, 5503 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)3, 3092 },
	{ (Il2CppRGCTXDataType)2, 1731 },
	{ (Il2CppRGCTXDataType)2, 1440 },
	{ (Il2CppRGCTXDataType)3, 5526 },
	{ (Il2CppRGCTXDataType)2, 1119 },
	{ (Il2CppRGCTXDataType)2, 1448 },
	{ (Il2CppRGCTXDataType)3, 5554 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)3, 5539 },
	{ (Il2CppRGCTXDataType)2, 403 },
	{ (Il2CppRGCTXDataType)3, 14 },
	{ (Il2CppRGCTXDataType)3, 15 },
	{ (Il2CppRGCTXDataType)2, 677 },
	{ (Il2CppRGCTXDataType)3, 2278 },
	{ (Il2CppRGCTXDataType)2, 404 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)3, 21 },
	{ (Il2CppRGCTXDataType)2, 681 },
	{ (Il2CppRGCTXDataType)3, 2280 },
	{ (Il2CppRGCTXDataType)2, 449 },
	{ (Il2CppRGCTXDataType)3, 419 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)2, 1106 },
	{ (Il2CppRGCTXDataType)3, 3372 },
	{ (Il2CppRGCTXDataType)2, 1001 },
	{ (Il2CppRGCTXDataType)2, 749 },
	{ (Il2CppRGCTXDataType)2, 822 },
	{ (Il2CppRGCTXDataType)2, 876 },
	{ (Il2CppRGCTXDataType)2, 823 },
	{ (Il2CppRGCTXDataType)2, 877 },
	{ (Il2CppRGCTXDataType)3, 2279 },
	{ (Il2CppRGCTXDataType)2, 815 },
	{ (Il2CppRGCTXDataType)2, 816 },
	{ (Il2CppRGCTXDataType)2, 874 },
	{ (Il2CppRGCTXDataType)3, 2277 },
	{ (Il2CppRGCTXDataType)2, 748 },
	{ (Il2CppRGCTXDataType)2, 821 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 6655 },
	{ (Il2CppRGCTXDataType)3, 1959 },
	{ (Il2CppRGCTXDataType)2, 604 },
	{ (Il2CppRGCTXDataType)2, 818 },
	{ (Il2CppRGCTXDataType)2, 875 },
	{ (Il2CppRGCTXDataType)2, 920 },
	{ (Il2CppRGCTXDataType)3, 3093 },
	{ (Il2CppRGCTXDataType)3, 3095 },
	{ (Il2CppRGCTXDataType)2, 289 },
	{ (Il2CppRGCTXDataType)3, 3094 },
	{ (Il2CppRGCTXDataType)3, 3103 },
	{ (Il2CppRGCTXDataType)2, 1056 },
	{ (Il2CppRGCTXDataType)2, 1434 },
	{ (Il2CppRGCTXDataType)3, 5504 },
	{ (Il2CppRGCTXDataType)3, 3104 },
	{ (Il2CppRGCTXDataType)2, 849 },
	{ (Il2CppRGCTXDataType)2, 893 },
	{ (Il2CppRGCTXDataType)3, 2285 },
	{ (Il2CppRGCTXDataType)3, 6645 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)3, 5540 },
	{ (Il2CppRGCTXDataType)3, 3096 },
	{ (Il2CppRGCTXDataType)2, 1055 },
	{ (Il2CppRGCTXDataType)2, 1432 },
	{ (Il2CppRGCTXDataType)3, 5497 },
	{ (Il2CppRGCTXDataType)3, 2284 },
	{ (Il2CppRGCTXDataType)3, 3097 },
	{ (Il2CppRGCTXDataType)3, 6644 },
	{ (Il2CppRGCTXDataType)2, 1441 },
	{ (Il2CppRGCTXDataType)3, 5527 },
	{ (Il2CppRGCTXDataType)3, 3110 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)2, 1439 },
	{ (Il2CppRGCTXDataType)3, 5520 },
	{ (Il2CppRGCTXDataType)3, 3407 },
	{ (Il2CppRGCTXDataType)3, 1608 },
	{ (Il2CppRGCTXDataType)3, 2286 },
	{ (Il2CppRGCTXDataType)3, 1607 },
	{ (Il2CppRGCTXDataType)3, 3111 },
	{ (Il2CppRGCTXDataType)3, 6646 },
	{ (Il2CppRGCTXDataType)2, 1449 },
	{ (Il2CppRGCTXDataType)3, 5555 },
	{ (Il2CppRGCTXDataType)3, 3124 },
	{ (Il2CppRGCTXDataType)2, 1059 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)3, 5542 },
	{ (Il2CppRGCTXDataType)3, 3125 },
	{ (Il2CppRGCTXDataType)2, 852 },
	{ (Il2CppRGCTXDataType)2, 896 },
	{ (Il2CppRGCTXDataType)3, 2290 },
	{ (Il2CppRGCTXDataType)3, 2289 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)3, 5506 },
	{ (Il2CppRGCTXDataType)3, 6650 },
	{ (Il2CppRGCTXDataType)2, 1446 },
	{ (Il2CppRGCTXDataType)3, 5541 },
	{ (Il2CppRGCTXDataType)3, 3117 },
	{ (Il2CppRGCTXDataType)2, 1058 },
	{ (Il2CppRGCTXDataType)2, 1443 },
	{ (Il2CppRGCTXDataType)3, 5529 },
	{ (Il2CppRGCTXDataType)3, 2288 },
	{ (Il2CppRGCTXDataType)3, 2287 },
	{ (Il2CppRGCTXDataType)3, 3118 },
	{ (Il2CppRGCTXDataType)2, 1435 },
	{ (Il2CppRGCTXDataType)3, 5505 },
	{ (Il2CppRGCTXDataType)3, 6649 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)3, 5528 },
	{ (Il2CppRGCTXDataType)3, 3131 },
	{ (Il2CppRGCTXDataType)2, 1060 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)3, 5557 },
	{ (Il2CppRGCTXDataType)3, 3408 },
	{ (Il2CppRGCTXDataType)3, 1610 },
	{ (Il2CppRGCTXDataType)3, 2292 },
	{ (Il2CppRGCTXDataType)3, 2291 },
	{ (Il2CppRGCTXDataType)3, 1609 },
	{ (Il2CppRGCTXDataType)3, 3132 },
	{ (Il2CppRGCTXDataType)2, 1437 },
	{ (Il2CppRGCTXDataType)3, 5507 },
	{ (Il2CppRGCTXDataType)3, 6651 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)3, 5556 },
	{ (Il2CppRGCTXDataType)3, 2282 },
	{ (Il2CppRGCTXDataType)3, 2283 },
	{ (Il2CppRGCTXDataType)3, 2293 },
	{ (Il2CppRGCTXDataType)2, 750 },
	{ (Il2CppRGCTXDataType)2, 1734 },
	{ (Il2CppRGCTXDataType)2, 833 },
	{ (Il2CppRGCTXDataType)2, 878 },
	{ (Il2CppRGCTXDataType)3, 1975 },
	{ (Il2CppRGCTXDataType)2, 612 },
	{ (Il2CppRGCTXDataType)3, 2472 },
	{ (Il2CppRGCTXDataType)3, 2473 },
	{ (Il2CppRGCTXDataType)3, 2478 },
	{ (Il2CppRGCTXDataType)2, 928 },
	{ (Il2CppRGCTXDataType)3, 2475 },
	{ (Il2CppRGCTXDataType)3, 6855 },
	{ (Il2CppRGCTXDataType)2, 592 },
	{ (Il2CppRGCTXDataType)3, 1603 },
	{ (Il2CppRGCTXDataType)1, 805 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)3, 2474 },
	{ (Il2CppRGCTXDataType)1, 1740 },
	{ (Il2CppRGCTXDataType)1, 928 },
	{ (Il2CppRGCTXDataType)2, 1780 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)3, 2479 },
	{ (Il2CppRGCTXDataType)3, 2477 },
	{ (Il2CppRGCTXDataType)3, 2476 },
	{ (Il2CppRGCTXDataType)2, 208 },
	{ (Il2CppRGCTXDataType)3, 1611 },
	{ (Il2CppRGCTXDataType)2, 298 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	94,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	31,
	s_rgctxIndices,
	162,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
