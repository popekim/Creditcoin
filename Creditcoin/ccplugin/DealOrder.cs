// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: DealOrder.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from DealOrder.proto</summary>
public static partial class DealOrderReflection {

  #region Descriptor
  /// <summary>File descriptor for DealOrder.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static DealOrderReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "Cg9EZWFsT3JkZXIucHJvdG8i/wEKCURlYWxPcmRlchISCgpibG9ja2NoYWlu",
          "GAEgASgJEhMKC3NyY19hZGRyZXNzGAIgASgJEhMKC2RzdF9hZGRyZXNzGAMg",
          "ASgJEg4KBmFtb3VudBgEIAEoCRIQCghpbnRlcmVzdBgFIAEoCRIQCghtYXR1",
          "cml0eRgGIAEoCRILCgNmZWUYByABKAkSEgoKZXhwaXJhdGlvbhgIIAEoBBIN",
          "CgVibG9jaxgJIAEoCRIVCg1sb2FuX3RyYW5zZmVyGAogASgJEhoKEnJlcGF5",
          "bWVudF90cmFuc2ZlchgLIAEoCRIMCgRsb2NrGAwgASgJEg8KB3NpZ2hhc2gY",
          "DSABKAliBnByb3RvMw=="));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
          new pbr::GeneratedClrTypeInfo(typeof(global::DealOrder), global::DealOrder.Parser, new[]{ "Blockchain", "SrcAddress", "DstAddress", "Amount", "Interest", "Maturity", "Fee", "Expiration", "Block", "LoanTransfer", "RepaymentTransfer", "Lock", "Sighash" }, null, null, null)
        }));
  }
  #endregion

}
#region Messages
public sealed partial class DealOrder : pb::IMessage<DealOrder> {
  private static readonly pb::MessageParser<DealOrder> _parser = new pb::MessageParser<DealOrder>(() => new DealOrder());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<DealOrder> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::DealOrderReflection.Descriptor.MessageTypes[0]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public DealOrder() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public DealOrder(DealOrder other) : this() {
    blockchain_ = other.blockchain_;
    srcAddress_ = other.srcAddress_;
    dstAddress_ = other.dstAddress_;
    amount_ = other.amount_;
    interest_ = other.interest_;
    maturity_ = other.maturity_;
    fee_ = other.fee_;
    expiration_ = other.expiration_;
    block_ = other.block_;
    loanTransfer_ = other.loanTransfer_;
    repaymentTransfer_ = other.repaymentTransfer_;
    lock_ = other.lock_;
    sighash_ = other.sighash_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public DealOrder Clone() {
    return new DealOrder(this);
  }

  /// <summary>Field number for the "blockchain" field.</summary>
  public const int BlockchainFieldNumber = 1;
  private string blockchain_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Blockchain {
    get { return blockchain_; }
    set {
      blockchain_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "src_address" field.</summary>
  public const int SrcAddressFieldNumber = 2;
  private string srcAddress_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string SrcAddress {
    get { return srcAddress_; }
    set {
      srcAddress_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "dst_address" field.</summary>
  public const int DstAddressFieldNumber = 3;
  private string dstAddress_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string DstAddress {
    get { return dstAddress_; }
    set {
      dstAddress_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "amount" field.</summary>
  public const int AmountFieldNumber = 4;
  private string amount_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Amount {
    get { return amount_; }
    set {
      amount_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "interest" field.</summary>
  public const int InterestFieldNumber = 5;
  private string interest_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Interest {
    get { return interest_; }
    set {
      interest_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "maturity" field.</summary>
  public const int MaturityFieldNumber = 6;
  private string maturity_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Maturity {
    get { return maturity_; }
    set {
      maturity_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "fee" field.</summary>
  public const int FeeFieldNumber = 7;
  private string fee_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Fee {
    get { return fee_; }
    set {
      fee_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "expiration" field.</summary>
  public const int ExpirationFieldNumber = 8;
  private ulong expiration_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public ulong Expiration {
    get { return expiration_; }
    set {
      expiration_ = value;
    }
  }

  /// <summary>Field number for the "block" field.</summary>
  public const int BlockFieldNumber = 9;
  private string block_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Block {
    get { return block_; }
    set {
      block_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "loan_transfer" field.</summary>
  public const int LoanTransferFieldNumber = 10;
  private string loanTransfer_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string LoanTransfer {
    get { return loanTransfer_; }
    set {
      loanTransfer_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "repayment_transfer" field.</summary>
  public const int RepaymentTransferFieldNumber = 11;
  private string repaymentTransfer_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string RepaymentTransfer {
    get { return repaymentTransfer_; }
    set {
      repaymentTransfer_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "lock" field.</summary>
  public const int LockFieldNumber = 12;
  private string lock_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Lock {
    get { return lock_; }
    set {
      lock_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "sighash" field.</summary>
  public const int SighashFieldNumber = 13;
  private string sighash_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Sighash {
    get { return sighash_; }
    set {
      sighash_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as DealOrder);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(DealOrder other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (Blockchain != other.Blockchain) return false;
    if (SrcAddress != other.SrcAddress) return false;
    if (DstAddress != other.DstAddress) return false;
    if (Amount != other.Amount) return false;
    if (Interest != other.Interest) return false;
    if (Maturity != other.Maturity) return false;
    if (Fee != other.Fee) return false;
    if (Expiration != other.Expiration) return false;
    if (Block != other.Block) return false;
    if (LoanTransfer != other.LoanTransfer) return false;
    if (RepaymentTransfer != other.RepaymentTransfer) return false;
    if (Lock != other.Lock) return false;
    if (Sighash != other.Sighash) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (Blockchain.Length != 0) hash ^= Blockchain.GetHashCode();
    if (SrcAddress.Length != 0) hash ^= SrcAddress.GetHashCode();
    if (DstAddress.Length != 0) hash ^= DstAddress.GetHashCode();
    if (Amount.Length != 0) hash ^= Amount.GetHashCode();
    if (Interest.Length != 0) hash ^= Interest.GetHashCode();
    if (Maturity.Length != 0) hash ^= Maturity.GetHashCode();
    if (Fee.Length != 0) hash ^= Fee.GetHashCode();
    if (Expiration != 0UL) hash ^= Expiration.GetHashCode();
    if (Block.Length != 0) hash ^= Block.GetHashCode();
    if (LoanTransfer.Length != 0) hash ^= LoanTransfer.GetHashCode();
    if (RepaymentTransfer.Length != 0) hash ^= RepaymentTransfer.GetHashCode();
    if (Lock.Length != 0) hash ^= Lock.GetHashCode();
    if (Sighash.Length != 0) hash ^= Sighash.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
    if (Blockchain.Length != 0) {
      output.WriteRawTag(10);
      output.WriteString(Blockchain);
    }
    if (SrcAddress.Length != 0) {
      output.WriteRawTag(18);
      output.WriteString(SrcAddress);
    }
    if (DstAddress.Length != 0) {
      output.WriteRawTag(26);
      output.WriteString(DstAddress);
    }
    if (Amount.Length != 0) {
      output.WriteRawTag(34);
      output.WriteString(Amount);
    }
    if (Interest.Length != 0) {
      output.WriteRawTag(42);
      output.WriteString(Interest);
    }
    if (Maturity.Length != 0) {
      output.WriteRawTag(50);
      output.WriteString(Maturity);
    }
    if (Fee.Length != 0) {
      output.WriteRawTag(58);
      output.WriteString(Fee);
    }
    if (Expiration != 0UL) {
      output.WriteRawTag(64);
      output.WriteUInt64(Expiration);
    }
    if (Block.Length != 0) {
      output.WriteRawTag(74);
      output.WriteString(Block);
    }
    if (LoanTransfer.Length != 0) {
      output.WriteRawTag(82);
      output.WriteString(LoanTransfer);
    }
    if (RepaymentTransfer.Length != 0) {
      output.WriteRawTag(90);
      output.WriteString(RepaymentTransfer);
    }
    if (Lock.Length != 0) {
      output.WriteRawTag(98);
      output.WriteString(Lock);
    }
    if (Sighash.Length != 0) {
      output.WriteRawTag(106);
      output.WriteString(Sighash);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (Blockchain.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Blockchain);
    }
    if (SrcAddress.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(SrcAddress);
    }
    if (DstAddress.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(DstAddress);
    }
    if (Amount.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Amount);
    }
    if (Interest.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Interest);
    }
    if (Maturity.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Maturity);
    }
    if (Fee.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Fee);
    }
    if (Expiration != 0UL) {
      size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Expiration);
    }
    if (Block.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Block);
    }
    if (LoanTransfer.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(LoanTransfer);
    }
    if (RepaymentTransfer.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(RepaymentTransfer);
    }
    if (Lock.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Lock);
    }
    if (Sighash.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Sighash);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(DealOrder other) {
    if (other == null) {
      return;
    }
    if (other.Blockchain.Length != 0) {
      Blockchain = other.Blockchain;
    }
    if (other.SrcAddress.Length != 0) {
      SrcAddress = other.SrcAddress;
    }
    if (other.DstAddress.Length != 0) {
      DstAddress = other.DstAddress;
    }
    if (other.Amount.Length != 0) {
      Amount = other.Amount;
    }
    if (other.Interest.Length != 0) {
      Interest = other.Interest;
    }
    if (other.Maturity.Length != 0) {
      Maturity = other.Maturity;
    }
    if (other.Fee.Length != 0) {
      Fee = other.Fee;
    }
    if (other.Expiration != 0UL) {
      Expiration = other.Expiration;
    }
    if (other.Block.Length != 0) {
      Block = other.Block;
    }
    if (other.LoanTransfer.Length != 0) {
      LoanTransfer = other.LoanTransfer;
    }
    if (other.RepaymentTransfer.Length != 0) {
      RepaymentTransfer = other.RepaymentTransfer;
    }
    if (other.Lock.Length != 0) {
      Lock = other.Lock;
    }
    if (other.Sighash.Length != 0) {
      Sighash = other.Sighash;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 10: {
          Blockchain = input.ReadString();
          break;
        }
        case 18: {
          SrcAddress = input.ReadString();
          break;
        }
        case 26: {
          DstAddress = input.ReadString();
          break;
        }
        case 34: {
          Amount = input.ReadString();
          break;
        }
        case 42: {
          Interest = input.ReadString();
          break;
        }
        case 50: {
          Maturity = input.ReadString();
          break;
        }
        case 58: {
          Fee = input.ReadString();
          break;
        }
        case 64: {
          Expiration = input.ReadUInt64();
          break;
        }
        case 74: {
          Block = input.ReadString();
          break;
        }
        case 82: {
          LoanTransfer = input.ReadString();
          break;
        }
        case 90: {
          RepaymentTransfer = input.ReadString();
          break;
        }
        case 98: {
          Lock = input.ReadString();
          break;
        }
        case 106: {
          Sighash = input.ReadString();
          break;
        }
      }
    }
  }

}

#endregion


#endregion Designer generated code
