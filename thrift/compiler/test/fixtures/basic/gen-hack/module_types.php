<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * MyEnum
 */
enum MyEnum : int {
  MyValue1 = 0;
  MyValue2 = 1;
}
type MyEnumType = MyEnum;

/**
 * Original thrift struct:-
 * MyStruct
 */
class MyStruct implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  public static array<int, array<string, mixed>> $_TSPEC = array(
    1 => array(
      'var' => 'MyIntField',
      'type' => \TType::I64,
      ),
    2 => array(
      'var' => 'MyStringField',
      'type' => \TType::STRING,
      ),
    3 => array(
      'var' => 'MyDataField',
      'type' => \TType::STRUCT,
      'class' => 'MyDataItem',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'MyIntField' => 1,
    'MyStringField' => 2,
    'MyDataField' => 3,
  };
  const type TShape = shape(
    'MyIntField' => int,
    'MyStringField' => string,
    ?'MyDataField' => ?MyDataItem::TShape,
    ...
  );
  const int STRUCTURAL_ID = 7961684436256236642;
  /**
   * Original thrift field:-
   * 1: i64 MyIntField
   */
  public int $MyIntField;
  /**
   * Original thrift field:-
   * 2: string MyStringField
   */
  public string $MyStringField;
  /**
   * Original thrift field:-
   * 3: struct module.MyDataItem MyDataField
   */
  public ?MyDataItem $MyDataField;

  public function __construct(?int $MyIntField = null, ?string $MyStringField = null, ?MyDataItem $MyDataField = null  ) {
    if ($MyIntField === null) {
      $this->MyIntField = 0;
    } else {
      $this->MyIntField = $MyIntField;
    }
    if ($MyStringField === null) {
      $this->MyStringField = '';
    } else {
      $this->MyStringField = $MyStringField;
    }
    $this->MyDataField = $MyDataField;
  }

  public function getName(): string {
    return 'MyStruct';
  }

  public static function __jsonArrayToShape(
    array<arraykey, mixed> $json_data,
  ): ?self::TShape {
    $shape_data = $json_data;

    if (!array_key_exists('MyIntField', $shape_data)) {
      $shape_data['MyIntField'] = 0;
    }
    if (!is_int($shape_data['MyIntField'])) {
      return null;
    }

    if (!array_key_exists('MyStringField', $shape_data)) {
      $shape_data['MyStringField'] = '';
    }
    if (!is_string($shape_data['MyStringField'])) {
      return null;
    }

    if (!array_key_exists('MyDataField', $shape_data)) {
      $shape_data['MyDataField'] = null;
    }
    if (!is_null($shape_data['MyDataField'])) {
      $shape_data['MyDataField'] = MyDataItem::__jsonArrayToShape(/* HH_IGNORE_ERROR[4110] */ $shape_data['MyDataField']);
      if (is_null($shape_data['MyDataField'])) {
        return null;
      }
    }

    return /* HH_IGNORE_ERROR[4110] */ $shape_data;
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = /* HH_IGNORE_ERROR[4060] */ new static();
    $me->MyIntField = $shape['MyIntField'];
    $me->MyStringField = $shape['MyStringField'];
    $me->MyDataField = Shapes::idx($shape, 'MyDataField') === null ? null : MyDataItem::__fromShape(nullthrows(Shapes::idx($shape, 'MyDataField')));
    return $me;
  }

  public function __toShape(): self::TShape {
    return shape(
      'MyIntField' => $this->MyIntField,
      'MyStringField' => $this->MyStringField,
      'MyDataField' => $this->MyDataField?->__toShape(),
    );
  }
}

/**
 * Original thrift struct:-
 * MyDataItem
 */
class MyDataItem implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  public static array<int, array<string, mixed>> $_TSPEC = array(
    );
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'MyDataItem';
  }

  public static function __jsonArrayToShape(
    array<arraykey, mixed> $json_data,
  ): ?self::TShape {
    $shape_data = $json_data;

    return /* HH_IGNORE_ERROR[4110] */ $shape_data;
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = /* HH_IGNORE_ERROR[4060] */ new static();
    return $me;
  }

  public function __toShape(): self::TShape {
    return shape(
    );
  }
}

