/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.constants;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("union2")
public final class Union2 {
    private static final Map<Short, String> ID_TO_THRIFT_NAME = new HashMap();
    static {
      ID_TO_THRIFT_NAME.put((short) 1, "i");
      ID_TO_THRIFT_NAME.put((short) 2, "d");
      ID_TO_THRIFT_NAME.put((short) 3, "s");
      ID_TO_THRIFT_NAME.put((short) 4, "u");
    }
    private Object value;
    private short id;
    
    private static final TStruct STRUCT_DESC = new TStruct("union2");
    public static final int _I = 1;
    private static final TField I_FIELD_DESC = new TField("i", TType.I32, (short)1);
    public static final int _D = 2;
    private static final TField D_FIELD_DESC = new TField("d", TType.DOUBLE, (short)2);
    public static final int _S = 3;
    private static final TField S_FIELD_DESC = new TField("s", TType.STRUCT, (short)3);
    public static final int _U = 4;
    private static final TField U_FIELD_DESC = new TField("u", TType.STRUCT, (short)4);
    
    @ThriftConstructor
    public Union2() {
    }
    
    @ThriftConstructor
    @Deprecated
    public Union2(final int i) {
        this.value = i;
        this.id = 1;
    }
    
    @ThriftConstructor
    @Deprecated
    public Union2(final double d) {
        this.value = d;
        this.id = 2;
    }
    
    @ThriftConstructor
    @Deprecated
    public Union2(final test.fixtures.constants.Struct1 s) {
        this.value = s;
        this.id = 3;
    }
    
    @ThriftConstructor
    @Deprecated
    public Union2(final test.fixtures.constants.Union1 u) {
        this.value = u;
        this.id = 4;
    }
    
    public static Union2 fromI(final int i) {
        Union2 res = new Union2();
        res.value = i;
        res.id = 1;
        return res;
    }
    
    public static Union2 fromD(final double d) {
        Union2 res = new Union2();
        res.value = d;
        res.id = 2;
        return res;
    }
    
    public static Union2 fromS(final test.fixtures.constants.Struct1 s) {
        Union2 res = new Union2();
        res.value = s;
        res.id = 3;
        return res;
    }
    
    public static Union2 fromU(final test.fixtures.constants.Union1 u) {
        Union2 res = new Union2();
        res.value = u;
        res.id = 4;
        return res;
    }
    

    @ThriftField(value=1, name="i", requiredness=Requiredness.NONE)
    public int getI() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a i element!");
        }
        return (int) value;
    }

    public boolean isSetI() {
        return this.id == 1;
    }

    @ThriftField(value=2, name="d", requiredness=Requiredness.NONE)
    public double getD() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a d element!");
        }
        return (double) value;
    }

    public boolean isSetD() {
        return this.id == 2;
    }

    @ThriftField(value=3, name="s", requiredness=Requiredness.NONE)
    public test.fixtures.constants.Struct1 getS() {
        if (this.id != 3) {
            throw new IllegalStateException("Not a s element!");
        }
        return (test.fixtures.constants.Struct1) value;
    }

    public boolean isSetS() {
        return this.id == 3;
    }

    @ThriftField(value=4, name="u", requiredness=Requiredness.NONE)
    public test.fixtures.constants.Union1 getU() {
        if (this.id != 4) {
            throw new IllegalStateException("Not a u element!");
        }
        return (test.fixtures.constants.Union1) value;
    }

    public boolean isSetU() {
        return this.id == 4;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        return ID_TO_THRIFT_NAME.get(this.id);
    }

    public void accept(Visitor visitor) {
        if (isSetI()) {
            visitor.visitI(getI());
            return;
        }
        if (isSetD()) {
            visitor.visitD(getD());
            return;
        }
        if (isSetS()) {
            visitor.visitS(getS());
            return;
        }
        if (isSetU()) {
            visitor.visitU(getU());
            return;
        }
    }

    @Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        Union2 other = (Union2)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitI(int i);
        void visitD(double d);
        void visitS(test.fixtures.constants.Struct1 s);
        void visitU(test.fixtures.constants.Union1 u);
    }

    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.id != 0 && this.value == null ){
         throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
      }
      switch (this.id) {
      case _I: {
        oprot.writeFieldBegin(I_FIELD_DESC);
        int i = (int)this.value;
        oprot.writeI32(i);
        oprot.writeFieldEnd();
        break;
      }
      case _D: {
        oprot.writeFieldBegin(D_FIELD_DESC);
        double d = (double)this.value;
        oprot.writeDouble(d);
        oprot.writeFieldEnd();
        break;
      }
      case _S: {
        oprot.writeFieldBegin(S_FIELD_DESC);
        test.fixtures.constants.Struct1 s = (test.fixtures.constants.Struct1)this.value;
        s.write0(oprot);
        oprot.writeFieldEnd();
        break;
      }
      case _U: {
        oprot.writeFieldBegin(U_FIELD_DESC);
        test.fixtures.constants.Union1 u = (test.fixtures.constants.Union1)this.value;
        u.write0(oprot);
        oprot.writeFieldEnd();
        break;
      }
      default:
          throw new IllegalStateException("Cannot write union with unknown field ");
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    public static Union2 read0(TProtocol oprot) throws TException {
      Union2 res = new Union2();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin();
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _I:
            if (__field.type == I_FIELD_DESC.type) {
              int i = oprot.readI32();
              res.value = i;
            }
            break;
          case _D:
            if (__field.type == D_FIELD_DESC.type) {
              double d = oprot.readDouble();
              res.value = d;
            }
            break;
          case _S:
            if (__field.type == S_FIELD_DESC.type) {
              test.fixtures.constants.Struct1 s = test.fixtures.constants.Struct1.read0(oprot);
              res.value = s;
            }
            break;
          case _U:
            if (__field.type == U_FIELD_DESC.type) {
              test.fixtures.constants.Union1 u = test.fixtures.constants.Union1.read0(oprot);
              res.value = u;
            }
            break;
          }
          TProtocolUtil.skip(oprot, __field.type);
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return res;
    }
}
