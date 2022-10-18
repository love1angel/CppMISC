# design pattern: factory

## this implement return single object but not thread safe

## better don't to create abstract factory using pattern factory for we need to make_shared so in factory src need to include implement headers

## 这一产品族相对固定，应为要改变 abstract 添加新的 create product 方法，不然不好扩展，不如用 factory