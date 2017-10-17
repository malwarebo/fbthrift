<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array<int, array<string, mixed>> $_TSPEC = array(
    1 => array(
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => array(
        'type' => \TType::STRING,
        ),
        'format' => 'harray',
      ),
    2 => array(
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => array(
        'type' => \TType::STRING,
      ),
      'val' => array(
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => array(
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => array(
            'type' => \TType::I32,
            ),
            'format' => 'harray',
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
  };
  const int STRUCTURAL_ID = 5283012534631553068;
  /**
   * Original thrift field:-
   * 1: list<string> a
   */
  public vec<string> $a;
  /**
   * Original thrift field:-
   * 2: map<string, list<set<i32>>> b
   */
  public dict<string, vec<keyset<int>>> $b;

  public function __construct(?vec<string> $a = null, ?dict<string, vec<keyset<int>>> $b = null  ) {
    if ($a === null) {
      $this->a = vec[];
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = dict[];
    } else {
      $this->b = $b;
    }
  }

  public function getName(): string {
    return 'Foo';
  }

}

