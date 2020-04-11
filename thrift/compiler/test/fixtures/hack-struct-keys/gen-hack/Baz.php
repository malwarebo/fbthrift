<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Baz
 */
interface BazAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * string
   *   qux(1: set<Foo> a,
   *       2: list<Bar> b,
   *       3: map<Foo, string> c);
   */
  public function qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Baz
 */
interface BazIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   qux(1: set<Foo> a,
   *       2: list<Bar> b,
   *       3: map<Foo, string> c);
   */
  public function qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): string;
}

/**
 * Original thrift service:-
 * Baz
 */
interface BazClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   qux(1: set<Foo> a,
   *       2: list<Bar> b,
   *       3: map<Foo, string> c);
   */
  public function qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): Awaitable<string>;
}

class BazRest {
  protected BazIf $impl_;

  public function __construct(BazIf $impl) {
    $this->impl_ = $impl;
  }

  public function qux(KeyedContainer<string, mixed> $request): string {
    $a =  idx($request, 'a');
    /* HH_FIXME[4107] */ /* HH_FIXME[2049] Previously hidden by unsafe */
    $a = json_decode($a, true);
    $b =  idx($request, 'b');
    /* HH_FIXME[4107] */ /* HH_FIXME[2049] Previously hidden by unsafe */
    $b = json_decode($b, true);
    $c =  idx($request, 'c');
    /* HH_FIXME[4107] */ /* HH_FIXME[2049] Previously hidden by unsafe */
    $c = json_decode($c, true);
    /* HH_FIXME[4053] Previously hidden by unsafe */
    return $this->impl_->qux($a, $b, $c);
  }

}

/**
 * Original thrift service:-
 * Baz
 */
trait BazClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new Baz_qux_args(
      $a,
      new Vector($b),
      new Map($c),
    );
    try {
      $this->eventHandler_->preSend('qux', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'qux', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'qux', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('qux', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('qux', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('qux', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('qux', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('qux', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_qux(?int $expectedsequenceid = null): string {
    try {
      $this->eventHandler_->preRecv('qux', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'Baz_qux_result', $this->input_->isStrictRead());
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'Baz_qux_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new Baz_qux_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("qux failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('qux', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('qux', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('qux', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('qux', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('qux', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("qux failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('qux', $expectedsequenceid, $x);
    throw $x;
  }

}

class BazAsyncClient extends \ThriftClientBase implements BazAsyncIf {
  use BazClientBase;

  /**
   * Original thrift definition:-
   * string
   *   qux(1: set<Foo> a,
   *       2: list<Bar> b,
   *       3: map<Foo, string> c);
   */
  public async function qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Baz", "qux");
    $currentseqid = $this->sendImpl_qux($a, $b, $c);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is TMemoryBuffer && $in_transport is TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(RPCOptions::get(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_qux($currentseqid);
  }

}

class BazClient extends \ThriftClientBase implements BazClientIf {
  use BazClientBase;

  /**
   * Original thrift definition:-
   * string
   *   qux(1: set<Foo> a,
   *       2: list<Bar> b,
   *       3: map<Foo, string> c);
   */
  public async function qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Baz", "qux");
    $currentseqid = $this->sendImpl_qux($a, $b, $c);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is TMemoryBuffer && $in_transport is TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(RPCOptions::get(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_qux($currentseqid);
  }

  /* send and recv functions */
  public function send_qux(Set<arraykey> $a, KeyedContainer<int, Bar> $b, KeyedContainer<arraykey, string> $c): int {
    return $this->sendImpl_qux($a, $b, $c);
  }
  public function recv_qux(?int $expectedsequenceid = null): string {
    return $this->recvImpl_qux($expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class Baz_qux_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::SET,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => Foo::class,
      ),
      'format' => 'collection',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => Bar::class,
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'c',
      'type' => \TType::MAP,
      'ktype' => \TType::STRUCT,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRUCT,
        'class' => Foo::class,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'c' => 3,
  ];
  const int STRUCTURAL_ID = 1160460043765273624;
  public Set<arraykey> $a;
  public Vector<Bar> $b;
  public Map<arraykey, string> $c;

  <<__Rx>>
  public function __construct(?Set<arraykey> $a = null, ?Vector<Bar> $b = null, ?Map<arraykey, string> $c = null  ) {
    if ($a === null) {
      $this->a = Set {};
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = Vector {};
    } else {
      $this->b = $b;
    }
    if ($c === null) {
      $this->c = Map {};
    } else {
      $this->c = $c;
    }
  }

  public function getName(): string {
    return 'Baz_qux_args';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}

class Baz_qux_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];
  const int STRUCTURAL_ID = 1365128170602685579;
  public ?string $success;

  <<__Rx>>
  public function __construct(?string $success = null  ) {
  }

  public function getName(): string {
    return 'Baz_qux_result';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}

