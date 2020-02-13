//
// Copyright 2010-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <AWSCore/AWSNetworking.h>
#import <AWSCore/AWSModel.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const AWSKMSErrorDomain;

typedef NS_ENUM(NSInteger, AWSKMSErrorType) {
    AWSKMSErrorUnknown,
    AWSKMSErrorAlreadyExists,
    AWSKMSErrorCloudHsmClusterInUse,
    AWSKMSErrorCloudHsmClusterInvalidConfiguration,
    AWSKMSErrorCloudHsmClusterNotActive,
    AWSKMSErrorCloudHsmClusterNotFound,
    AWSKMSErrorCloudHsmClusterNotRelated,
    AWSKMSErrorCustomKeyStoreHasCMKs,
    AWSKMSErrorCustomKeyStoreInvalidState,
    AWSKMSErrorCustomKeyStoreNameInUse,
    AWSKMSErrorCustomKeyStoreNotFound,
    AWSKMSErrorDependencyTimeout,
    AWSKMSErrorDisabled,
    AWSKMSErrorExpiredImportToken,
    AWSKMSErrorIncorrectKey,
    AWSKMSErrorIncorrectKeyMaterial,
    AWSKMSErrorIncorrectTrustAnchor,
    AWSKMSErrorInvalidAliasName,
    AWSKMSErrorInvalidArn,
    AWSKMSErrorInvalidCiphertext,
    AWSKMSErrorInvalidGrantId,
    AWSKMSErrorInvalidGrantToken,
    AWSKMSErrorInvalidImportToken,
    AWSKMSErrorInvalidKeyUsage,
    AWSKMSErrorInvalidMarker,
    AWSKMSErrorKMSInternal,
    AWSKMSErrorKMSInvalidSignature,
    AWSKMSErrorKMSInvalidState,
    AWSKMSErrorKeyUnavailable,
    AWSKMSErrorLimitExceeded,
    AWSKMSErrorMalformedPolicyDocument,
    AWSKMSErrorNotFound,
    AWSKMSErrorTag,
    AWSKMSErrorUnsupportedOperation,
};

typedef NS_ENUM(NSInteger, AWSKMSAlgorithmSpec) {
    AWSKMSAlgorithmSpecUnknown,
    AWSKMSAlgorithmSpecRsaesPkcs1V15,
    AWSKMSAlgorithmSpecRsaesOaepSha1,
    AWSKMSAlgorithmSpecRsaesOaepSha256,
};

typedef NS_ENUM(NSInteger, AWSKMSConnectionErrorCodeType) {
    AWSKMSConnectionErrorCodeTypeUnknown,
    AWSKMSConnectionErrorCodeTypeInvalidCredentials,
    AWSKMSConnectionErrorCodeTypeClusterNotFound,
    AWSKMSConnectionErrorCodeTypeNetworkErrors,
    AWSKMSConnectionErrorCodeTypeInternalError,
    AWSKMSConnectionErrorCodeTypeInsufficientCloudhsmHsms,
    AWSKMSConnectionErrorCodeTypeUserLockedOut,
    AWSKMSConnectionErrorCodeTypeUserNotFound,
    AWSKMSConnectionErrorCodeTypeUserLoggedIn,
};

typedef NS_ENUM(NSInteger, AWSKMSConnectionStateType) {
    AWSKMSConnectionStateTypeUnknown,
    AWSKMSConnectionStateTypeConnected,
    AWSKMSConnectionStateTypeConnecting,
    AWSKMSConnectionStateTypeFailed,
    AWSKMSConnectionStateTypeDisconnected,
    AWSKMSConnectionStateTypeDisconnecting,
};

typedef NS_ENUM(NSInteger, AWSKMSCustomerMasterKeySpec) {
    AWSKMSCustomerMasterKeySpecUnknown,
    AWSKMSCustomerMasterKeySpecRsa2048,
    AWSKMSCustomerMasterKeySpecRsa3072,
    AWSKMSCustomerMasterKeySpecRsa4096,
    AWSKMSCustomerMasterKeySpecEccNistP256,
    AWSKMSCustomerMasterKeySpecEccNistP384,
    AWSKMSCustomerMasterKeySpecEccNistP521,
    AWSKMSCustomerMasterKeySpecEccSecgP256k1,
    AWSKMSCustomerMasterKeySpecSymmetricDefault,
};

typedef NS_ENUM(NSInteger, AWSKMSDataKeyPairSpec) {
    AWSKMSDataKeyPairSpecUnknown,
    AWSKMSDataKeyPairSpecRsa2048,
    AWSKMSDataKeyPairSpecRsa3072,
    AWSKMSDataKeyPairSpecRsa4096,
    AWSKMSDataKeyPairSpecEccNistP256,
    AWSKMSDataKeyPairSpecEccNistP384,
    AWSKMSDataKeyPairSpecEccNistP521,
    AWSKMSDataKeyPairSpecEccSecgP256k1,
};

typedef NS_ENUM(NSInteger, AWSKMSDataKeySpec) {
    AWSKMSDataKeySpecUnknown,
    AWSKMSDataKeySpecAes256,
    AWSKMSDataKeySpecAes128,
};

typedef NS_ENUM(NSInteger, AWSKMSEncryptionAlgorithmSpec) {
    AWSKMSEncryptionAlgorithmSpecUnknown,
    AWSKMSEncryptionAlgorithmSpecSymmetricDefault,
    AWSKMSEncryptionAlgorithmSpecRsaesOaepSha1,
    AWSKMSEncryptionAlgorithmSpecRsaesOaepSha256,
};

typedef NS_ENUM(NSInteger, AWSKMSExpirationModelType) {
    AWSKMSExpirationModelTypeUnknown,
    AWSKMSExpirationModelTypeKeyMaterialExpires,
    AWSKMSExpirationModelTypeKeyMaterialDoesNotExpire,
};

typedef NS_ENUM(NSInteger, AWSKMSGrantOperation) {
    AWSKMSGrantOperationUnknown,
    AWSKMSGrantOperationDecrypt,
    AWSKMSGrantOperationEncrypt,
    AWSKMSGrantOperationGenerateDataKey,
    AWSKMSGrantOperationGenerateDataKeyWithoutPlaintext,
    AWSKMSGrantOperationReEncryptFrom,
    AWSKMSGrantOperationReEncryptTo,
    AWSKMSGrantOperationSign,
    AWSKMSGrantOperationVerify,
    AWSKMSGrantOperationGetPublicKey,
    AWSKMSGrantOperationCreateGrant,
    AWSKMSGrantOperationRetireGrant,
    AWSKMSGrantOperationDescribeKey,
    AWSKMSGrantOperationGenerateDataKeyPair,
    AWSKMSGrantOperationGenerateDataKeyPairWithoutPlaintext,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyManagerType) {
    AWSKMSKeyManagerTypeUnknown,
    AWSKMSKeyManagerTypeAws,
    AWSKMSKeyManagerTypeCustomer,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyState) {
    AWSKMSKeyStateUnknown,
    AWSKMSKeyStateEnabled,
    AWSKMSKeyStateDisabled,
    AWSKMSKeyStatePendingDeletion,
    AWSKMSKeyStatePendingImport,
    AWSKMSKeyStateUnavailable,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyUsageType) {
    AWSKMSKeyUsageTypeUnknown,
    AWSKMSKeyUsageTypeSignVerify,
    AWSKMSKeyUsageTypeEncryptDecrypt,
};

typedef NS_ENUM(NSInteger, AWSKMSMessageType) {
    AWSKMSMessageTypeUnknown,
    AWSKMSMessageTypeRAW,
    AWSKMSMessageTypeDigest,
};

typedef NS_ENUM(NSInteger, AWSKMSOriginType) {
    AWSKMSOriginTypeUnknown,
    AWSKMSOriginTypeAwsKms,
    AWSKMSOriginTypeExternal,
    AWSKMSOriginTypeAwsCloudhsm,
};

typedef NS_ENUM(NSInteger, AWSKMSSigningAlgorithmSpec) {
    AWSKMSSigningAlgorithmSpecUnknown,
    AWSKMSSigningAlgorithmSpecRsassaPssSha256,
    AWSKMSSigningAlgorithmSpecRsassaPssSha384,
    AWSKMSSigningAlgorithmSpecRsassaPssSha512,
    AWSKMSSigningAlgorithmSpecRsassaPkcs1V15Sha256,
    AWSKMSSigningAlgorithmSpecRsassaPkcs1V15Sha384,
    AWSKMSSigningAlgorithmSpecRsassaPkcs1V15Sha512,
    AWSKMSSigningAlgorithmSpecEcdsaSha256,
    AWSKMSSigningAlgorithmSpecEcdsaSha384,
    AWSKMSSigningAlgorithmSpecEcdsaSha512,
};

typedef NS_ENUM(NSInteger, AWSKMSWrappingKeySpec) {
    AWSKMSWrappingKeySpecUnknown,
    AWSKMSWrappingKeySpecRsa2048,
};

@class AWSKMSAliasListEntry;
@class AWSKMSCancelKeyDeletionRequest;
@class AWSKMSCancelKeyDeletionResponse;
@class AWSKMSConnectCustomKeyStoreRequest;
@class AWSKMSConnectCustomKeyStoreResponse;
@class AWSKMSCreateAliasRequest;
@class AWSKMSCreateCustomKeyStoreRequest;
@class AWSKMSCreateCustomKeyStoreResponse;
@class AWSKMSCreateGrantRequest;
@class AWSKMSCreateGrantResponse;
@class AWSKMSCreateKeyRequest;
@class AWSKMSCreateKeyResponse;
@class AWSKMSCustomKeyStoresListEntry;
@class AWSKMSDecryptRequest;
@class AWSKMSDecryptResponse;
@class AWSKMSDeleteAliasRequest;
@class AWSKMSDeleteCustomKeyStoreRequest;
@class AWSKMSDeleteCustomKeyStoreResponse;
@class AWSKMSDeleteImportedKeyMaterialRequest;
@class AWSKMSDescribeCustomKeyStoresRequest;
@class AWSKMSDescribeCustomKeyStoresResponse;
@class AWSKMSDescribeKeyRequest;
@class AWSKMSDescribeKeyResponse;
@class AWSKMSDisableKeyRequest;
@class AWSKMSDisableKeyRotationRequest;
@class AWSKMSDisconnectCustomKeyStoreRequest;
@class AWSKMSDisconnectCustomKeyStoreResponse;
@class AWSKMSEnableKeyRequest;
@class AWSKMSEnableKeyRotationRequest;
@class AWSKMSEncryptRequest;
@class AWSKMSEncryptResponse;
@class AWSKMSGenerateDataKeyPairRequest;
@class AWSKMSGenerateDataKeyPairResponse;
@class AWSKMSGenerateDataKeyPairWithoutPlaintextRequest;
@class AWSKMSGenerateDataKeyPairWithoutPlaintextResponse;
@class AWSKMSGenerateDataKeyRequest;
@class AWSKMSGenerateDataKeyResponse;
@class AWSKMSGenerateDataKeyWithoutPlaintextRequest;
@class AWSKMSGenerateDataKeyWithoutPlaintextResponse;
@class AWSKMSGenerateRandomRequest;
@class AWSKMSGenerateRandomResponse;
@class AWSKMSGetKeyPolicyRequest;
@class AWSKMSGetKeyPolicyResponse;
@class AWSKMSGetKeyRotationStatusRequest;
@class AWSKMSGetKeyRotationStatusResponse;
@class AWSKMSGetParametersForImportRequest;
@class AWSKMSGetParametersForImportResponse;
@class AWSKMSGetPublicKeyRequest;
@class AWSKMSGetPublicKeyResponse;
@class AWSKMSGrantConstraints;
@class AWSKMSGrantListEntry;
@class AWSKMSImportKeyMaterialRequest;
@class AWSKMSImportKeyMaterialResponse;
@class AWSKMSKeyListEntry;
@class AWSKMSKeyMetadata;
@class AWSKMSListAliasesRequest;
@class AWSKMSListAliasesResponse;
@class AWSKMSListGrantsRequest;
@class AWSKMSListGrantsResponse;
@class AWSKMSListKeyPoliciesRequest;
@class AWSKMSListKeyPoliciesResponse;
@class AWSKMSListKeysRequest;
@class AWSKMSListKeysResponse;
@class AWSKMSListResourceTagsRequest;
@class AWSKMSListResourceTagsResponse;
@class AWSKMSListRetirableGrantsRequest;
@class AWSKMSPutKeyPolicyRequest;
@class AWSKMSReEncryptRequest;
@class AWSKMSReEncryptResponse;
@class AWSKMSRetireGrantRequest;
@class AWSKMSRevokeGrantRequest;
@class AWSKMSScheduleKeyDeletionRequest;
@class AWSKMSScheduleKeyDeletionResponse;
@class AWSKMSSignRequest;
@class AWSKMSSignResponse;
@class AWSKMSTag;
@class AWSKMSTagResourceRequest;
@class AWSKMSUntagResourceRequest;
@class AWSKMSUpdateAliasRequest;
@class AWSKMSUpdateCustomKeyStoreRequest;
@class AWSKMSUpdateCustomKeyStoreResponse;
@class AWSKMSUpdateKeyDescriptionRequest;
@class AWSKMSVerifyRequest;
@class AWSKMSVerifyResponse;

/**
 <p>Contains information about an alias.</p>
 */
@interface AWSKMSAliasListEntry : AWSModel


/**
 <p>String that contains the key ARN.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasArn;

/**
 <p>String that contains the alias. This value begins with <code>alias/</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

/**
 <p>String that contains the key identifier referred to by the alias.</p>
 */
@property (nonatomic, strong) NSString * _Nullable targetKeyId;

@end

/**
 
 */
@interface AWSKMSCancelKeyDeletionRequest : AWSRequest


/**
 <p>The unique identifier for the customer master key (CMK) for which to cancel deletion.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSCancelKeyDeletionResponse : AWSModel


/**
 <p>The unique identifier of the master key for which deletion is canceled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSConnectCustomKeyStoreRequest : AWSRequest


/**
 <p>Enter the key store ID of the custom key store that you want to connect. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSConnectCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSCreateAliasRequest : AWSRequest


/**
 <p>Specifies the alias name. This value must begin with <code>alias/</code> followed by a name, such as <code>alias/ExampleAlias</code>. The alias name cannot begin with <code>alias/aws/</code>. The <code>alias/aws/</code> prefix is reserved for AWS managed CMKs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

/**
 <p>Identifies the CMK to which the alias refers. Specify the key ID or the Amazon Resource Name (ARN) of the CMK. You cannot specify another alias. For help finding the key ID and ARN, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding the Key ID and ARN</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable targetKeyId;

@end

/**
 
 */
@interface AWSKMSCreateCustomKeyStoreRequest : AWSRequest


/**
 <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the cluster ID of any active AWS CloudHSM cluster that is not already associated with a custom key store. To find the cluster ID, use the <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>Specifies a friendly name for the custom key store. The name must be unique in your AWS account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreName;

/**
 <p>Enter the password of the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser"><code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM cluster. AWS KMS logs into the cluster as this user to manage key material on your behalf.</p><p>The password must be a string of 7 to 32 characters. Its value is case sensitive.</p><p>This parameter tells AWS KMS the <code>kmsuser</code> account password; it does not change the password in the AWS CloudHSM cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyStorePassword;

/**
 <p>Enter the content of the trust anchor certificate for the cluster. This is the content of the <code>customerCA.crt</code> file that you created when you <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized the cluster</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable trustAnchorCertificate;

@end

/**
 
 */
@interface AWSKMSCreateCustomKeyStoreResponse : AWSModel


/**
 <p>A unique identifier for the new custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSCreateGrantRequest : AWSRequest


/**
 <p>Allows a cryptographic operation only when the encryption context matches or includes the encryption context specified in this structure. For more information about encryption context, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i><i>AWS Key Management Service Developer Guide</i></i>.</p>
 */
@property (nonatomic, strong) AWSKMSGrantConstraints * _Nullable constraints;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>The principal that is given permission to perform the operations that the grant permits.</p><p>To specify the principal, use the <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS accounts (root), IAM users, IAM roles, federated users, and assumed role users. For examples of the ARN syntax to use for specifying a principal, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS Identity and Access Management (IAM)</a> in the Example ARNs section of the <i>AWS General Reference</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granteePrincipal;

/**
 <p>The unique identifier for the customer master key (CMK) that the grant applies to.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK. To specify a CMK in a different AWS account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>A friendly name for identifying the grant. Use this value to prevent the unintended creation of duplicate grants when retrying this request.</p><p>When this value is absent, all <code>CreateGrant</code> requests result in a new grant with a unique <code>GrantId</code> even if all the supplied parameters are identical. This can result in unintended duplicates when you retry the <code>CreateGrant</code> request.</p><p>When this value is present, you can retry a <code>CreateGrant</code> request with identical parameters; if the grant already exists, the original <code>GrantId</code> is returned without creating a new grant. Note that the returned grant token is unique with every <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is returned. All grant tokens obtained in this way can be used interchangeably.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>A list of operations that the grant permits.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable operations;

/**
 <p>The principal that is given permission to retire the grant by using <a>RetireGrant</a> operation.</p><p>To specify the principal, use the <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS accounts (root), IAM users, federated users, and assumed role users. For examples of the ARN syntax to use for specifying a principal, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS Identity and Access Management (IAM)</a> in the Example ARNs section of the <i>AWS General Reference</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable retiringPrincipal;

@end

/**
 
 */
@interface AWSKMSCreateGrantResponse : AWSModel


/**
 <p>The unique identifier for the grant.</p><p>You can use the <code>GrantId</code> in a subsequent <a>RetireGrant</a> or <a>RevokeGrant</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>The grant token.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantToken;

@end

/**
 
 */
@interface AWSKMSCreateKeyRequest : AWSRequest


/**
 <p>A flag to indicate whether to bypass the key policy lockout safety check.</p><important><p>Setting this value to true increases the risk that the CMK becomes unmanageable. Do not set this value to true indiscriminately.</p><p>For more information, refer to the scenario in the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default Key Policy</a> section in the <i><i>AWS Key Management Service Developer Guide</i></i>.</p></important><p>Use this parameter only when you include a policy in the request and you intend to prevent the principal that is making the request from making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p><p>The default value is false.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bypassPolicyLockoutSafetyCheck;

/**
 <p>Creates the CMK in the specified <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a> and the key material in its associated AWS CloudHSM cluster. To create a CMK in a custom key store, you must also specify the <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS CloudHSM cluster that is associated with the custom key store must have at least two active HSMs, each in a different Availability Zone in the Region.</p><p>This parameter is valid only for symmetric CMKs. You cannot create an asymmetric CMK in a custom key store.</p><p>To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p><p>The response includes the custom key store ID and the ID of the AWS CloudHSM cluster.</p><p>This operation is part of the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a> feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control of a single-tenant key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Specifies the type of CMK to create. The default value, <code>SYMMETRIC_DEFAULT</code>, creates a CMK with a 256-bit symmetric key for encryption and decryption. For help choosing a key spec for your CMK, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How to Choose Your CMK Configuration</a> in the <i>AWS Key Management Service Developer Guide</i>.</p><p>The <code>CustomerMasterKeySpec</code> determines whether the CMK contains a symmetric key or an asymmetric key pair. It also determines the encryption algorithms or signing algorithms that the CMK supports. You can't change the <code>CustomerMasterKeySpec</code> after the CMK is created. To further restrict the algorithms that can be used with the CMK, use a condition key in its key policy or IAM policy. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a> or <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing Algorithm</a> in the <i>AWS Key Management Service Developer Guide</i>.</p><important><p><a href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">AWS services that are integrated with AWS KMS</a> use symmetric CMKs to protect your data. These services do not support asymmetric CMKs. For help determining whether a CMK is symmetric or asymmetric, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying Symmetric and Asymmetric CMKs</a> in the <i>AWS Key Management Service Developer Guide</i>.</p></important><p>AWS KMS supports the following key specs for CMKs:</p><ul><li><p>Symmetric key (default)</p><ul><li><p><code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p></li></ul></li><li><p>Asymmetric RSA key pairs</p><ul><li><p><code>RSA_2048</code></p></li><li><p><code>RSA_3072</code></p></li><li><p><code>RSA_4096</code></p></li></ul></li><li><p>Asymmetric NIST-recommended elliptic curve key pairs</p><ul><li><p><code>ECC_NIST_P256</code> (secp256r1)</p></li><li><p><code>ECC_NIST_P384</code> (secp384r1)</p></li><li><p><code>ECC_NIST_P521</code> (secp521r1)</p></li></ul></li><li><p>Other asymmetric elliptic curve key pairs</p><ul><li><p><code>ECC_SECG_P256K1</code> (secp256k1), commonly used for cryptocurrencies.</p></li></ul></li></ul>
 */
@property (nonatomic, assign) AWSKMSCustomerMasterKeySpec customerMasterKeySpec;

/**
 <p>A description of the CMK.</p><p>Use a description that helps you decide whether the CMK is appropriate for a task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Determines the cryptographic operations for which you can use the CMK. The default value is <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric CMKs. You can't change the <code>KeyUsage</code> value after the CMK is created.</p><p>Select only one valid value.</p><ul><li><p>For symmetric CMKs, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p></li><li><p>For asymmetric CMKs with RSA key material, specify <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p></li><li><p>For asymmetric CMKs with ECC key material, specify <code>SIGN_VERIFY</code>.</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSKeyUsageType keyUsage;

/**
 <p>The source of the key material for the CMK. You cannot change the origin after you create the CMK. The default is <code>AWS_KMS</code>, which means AWS KMS creates the key material.</p><p>When the parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key material so that you can import key material from your existing key management infrastructure. For more information about importing key material into AWS KMS, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>. This value is valid only for symmetric CMKs.</p><p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the CMK in an AWS KMS <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a> and creates its key material in the associated AWS CloudHSM cluster. You must also use the <code>CustomKeyStoreId</code> parameter to identify the custom key store. This value is valid only for symmetric CMKs.</p>
 */
@property (nonatomic, assign) AWSKMSOriginType origin;

/**
 <p>The key policy to attach to the CMK.</p><p>If you provide a key policy, it must meet the following criteria:</p><ul><li><p>If you don't set <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow the principal that is making the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that the CMK becomes unmanageable. For more information, refer to the scenario in the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default Key Policy</a> section of the <i><i>AWS Key Management Service Developer Guide</i></i>.</p></li><li><p>Each statement in the key policy must contain one or more principals. The principals in the key policy must exist and be visible to AWS KMS. When you create a new AWS principal (for example, an IAM user or role), you might need to enforce a delay before including the new principal in a key policy because the new principal might not be immediately visible to AWS KMS. For more information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes that I make are not always immediately visible</a> in the <i>AWS Identity and Access Management User Guide</i>.</p></li></ul><p>If you do not provide a key policy, AWS KMS attaches a default key policy to the CMK. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p><p>The key policy size quota is 32 kilobytes (32768 bytes).</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

/**
 <p>One or more tags. Each tag consists of a tag key and a tag value. Both the tag key and the tag value are required, but the tag value can be an empty (null) string.</p><p>When you add tags to an AWS resource, AWS generates a cost allocation report with usage and costs aggregated by tags. For information about adding, changing, deleting and listing tags for CMKs, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging Keys</a>.</p><p>Use this parameter to tag the CMK when it is created. To add tags to an existing CMK, use the <a>TagResource</a> operation.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSKMSCreateKeyResponse : AWSModel


/**
 <p>Metadata associated with the CMK.</p>
 */
@property (nonatomic, strong) AWSKMSKeyMetadata * _Nullable keyMetadata;

@end

/**
 <p>Contains information about each custom key store in the custom key store list.</p>
 */
@interface AWSKMSCustomKeyStoresListEntry : AWSModel


/**
 <p>A unique identifier for the AWS CloudHSM cluster that is associated with the custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>Describes the connection error. This field appears in the response only when the <code>ConnectionState</code> is <code>FAILED</code>. For help resolving these errors, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How to Fix a Connection Failure</a> in <i>AWS Key Management Service Developer Guide</i>.</p><p>Valid values are:</p><ul><li><p><code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster with the specified cluster ID.</p></li><li><p><code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster does not contain any active HSMs. To connect a custom key store to its AWS CloudHSM cluster, the cluster must contain at least one active HSM.</p></li><li><p><code>INTERNAL_ERROR</code> - AWS KMS could not complete the request due to an internal error. Retry the request. For <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store before trying to connect again.</p></li><li><p><code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster. Before you can connect your custom key store to its AWS CloudHSM cluster, you must change the <code>kmsuser</code> account password and update the key store password value for the custom key store.</p></li><li><p><code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS from connecting to the custom key store.</p></li><li><p><code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out of the associated AWS CloudHSM cluster due to too many failed password attempts. Before you can connect your custom key store to its AWS CloudHSM cluster, you must change the <code>kmsuser</code> account password and update the key store password value for the custom key store.</p></li><li><p><code>USER_LOGGED_IN</code> - The <code>kmsuser</code> CU account is logged into the the associated AWS CloudHSM cluster. This prevents AWS KMS from rotating the <code>kmsuser</code> account password and logging into the cluster. Before you can connect your custom key store to its AWS CloudHSM cluster, you must log the <code>kmsuser</code> CU out of the cluster. If you changed the <code>kmsuser</code> password to log into the cluster, you must also and update the key store password value for the custom key store. For help, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How to Log Out and Reconnect</a> in the <i>AWS Key Management Service Developer Guide</i>.</p></li><li><p><code>USER_NOT_FOUND</code> - AWS KMS cannot find a <code>kmsuser</code> CU account in the associated AWS CloudHSM cluster. Before you can connect your custom key store to its AWS CloudHSM cluster, you must create a <code>kmsuser</code> CU account in the cluster, and then update the key store password value for the custom key store.</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSConnectionErrorCodeType connectionErrorCode;

/**
 <p>Indicates whether the custom key store is connected to its AWS CloudHSM cluster.</p><p>You can create and use CMKs in your custom key stores only when its connection state is <code>CONNECTED</code>.</p><p>The value is <code>DISCONNECTED</code> if the key store has never been connected or you use the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is <code>CONNECTED</code> but you are having trouble using the custom key store, make sure that its associated AWS CloudHSM cluster is active and contains at least one active HSM.</p><p>A value of <code>FAILED</code> indicates that an attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field in the response indicates the cause of the failure. For help resolving a connection failure, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting a Custom Key Store</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSConnectionStateType connectionState;

/**
 <p>The date and time when the custom key store was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>A unique identifier for the custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>The user-specified friendly name for the custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreName;

/**
 <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize the cluster</a>, you create this certificate and save it in the <code>customerCA.crt</code> file.</p>
 */
@property (nonatomic, strong) NSString * _Nullable trustAnchorCertificate;

@end

/**
 
 */
@interface AWSKMSDecryptRequest : AWSRequest


/**
 <p>Ciphertext to be decrypted. The blob includes metadata.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>Specifies the encryption algorithm that will be used to decrypt the ciphertext. Specify the same algorithm that was used to encrypt the data. If you specify a different algorithm, the <code>Decrypt</code> operation fails.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents the only supported algorithm that is valid for symmetric CMKs.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>Specifies the encryption context to use when decrypting the data. An encryption context is valid only for cryptographic operations with a symmetric CMK. The standard asymmetric encryption algorithms that AWS KMS uses do not support an encryption context.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the ciphertext. Enter a key ID of the CMK that was used to encrypt the ciphertext.</p><p>If you specify a <code>KeyId</code> value, the <code>Decrypt</code> operation succeeds only if the specified CMK was used to encrypt the ciphertext.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the metadata that it adds to the ciphertext blob to determine which CMK was used to encrypt the ciphertext. However, you can use this parameter to ensure that a particular CMK (of any kind) is used to decrypt the ciphertext.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDecryptResponse : AWSModel


/**
 <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>The ARN of the customer master key that was used to perform the decryption.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Decrypted plaintext data. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSDeleteAliasRequest : AWSRequest


/**
 <p>The alias to be deleted. The alias name must begin with <code>alias/</code> followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

@end

/**
 
 */
@interface AWSKMSDeleteCustomKeyStoreRequest : AWSRequest


/**
 <p>Enter the ID of the custom key store you want to delete. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSDeleteCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSDeleteImportedKeyMaterialRequest : AWSRequest


/**
 <p>Identifies the CMK from which you are deleting imported key material. The <code>Origin</code> of the CMK must be <code>EXTERNAL</code>.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDescribeCustomKeyStoresRequest : AWSRequest


/**
 <p>Gets only information about the specified custom key store. Enter the key store ID.</p><p>By default, this operation gets information about all custom key stores in the account and region. To limit the output to a particular custom key store, you can use either the <code>CustomKeyStoreId</code> or <code>CustomKeyStoreName</code> parameter, but not both.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Gets only information about the specified custom key store. Enter the friendly name of the custom key store.</p><p>By default, this operation gets information about all custom key stores in the account and region. To limit the output to a particular custom key store, you can use either the <code>CustomKeyStoreId</code> or <code>CustomKeyStoreName</code> parameter, but not both.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreName;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSDescribeCustomKeyStoresResponse : AWSModel


/**
 <p>Contains metadata about each custom key store.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSCustomKeyStoresListEntry *> * _Nullable customKeyStores;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSDescribeKeyRequest : AWSRequest


/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Describes the specified customer master key (CMK). </p><p>If you specify a predefined AWS alias (an AWS alias with no key ID), KMS associates the alias with an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">AWS managed CMK</a> and returns its <code>KeyId</code> and <code>Arn</code> in the response.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDescribeKeyResponse : AWSModel


/**
 <p>Metadata associated with the key.</p>
 */
@property (nonatomic, strong) AWSKMSKeyMetadata * _Nullable keyMetadata;

@end

/**
 
 */
@interface AWSKMSDisableKeyRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDisableKeyRotationRequest : AWSRequest


/**
 <p>Identifies a symmetric customer master key (CMK). You cannot enable automatic rotation of <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html#asymmetric-cmks">asymmetric CMKs</a>, CMKs with <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported key material</a>, or CMKs in a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDisconnectCustomKeyStoreRequest : AWSRequest


/**
 <p>Enter the ID of the custom key store you want to disconnect. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSDisconnectCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSEnableKeyRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSEnableKeyRotationRequest : AWSRequest


/**
 <p>Identifies a symmetric customer master key (CMK). You cannot enable automatic rotation of asymmetric CMKs, CMKs with imported key material, or CMKs in a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSEncryptRequest : AWSRequest


/**
 <p>Specifies the encryption algorithm that AWS KMS will use to encrypt the plaintext message. The algorithm must be compatible with the CMK that you specify.</p><p>This parameter is required only for asymmetric CMKs. The default value, <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric CMKs. If you are using an asymmetric CMK, we recommend RSAES_OAEP_SHA_256.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>Specifies the encryption context that will be used to encrypt the data. An encryption context is valid only for cryptographic operations with a symmetric CMK. The standard asymmetric encryption algorithms that AWS KMS uses do not support an encryption context. </p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>A unique identifier for the customer master key (CMK).</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Data to be encrypted.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSEncryptResponse : AWSModel


/**
 <p>The encrypted plaintext. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The encryption algorithm that was used to encrypt the plaintext.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>The ID of the key used during encryption.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairRequest : AWSRequest


/**
 <p>Specifies the encryption context that will be used when encrypting the private key in the data key pair.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the symmetric CMK that encrypts the private key in the data key pair. You cannot specify an asymmetric CMKs.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Determines the type of data key pair that is generated. </p><p>The AWS KMS rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to sign and verify (but not both), and the rule that permits you to use ECC CMKs only to sign and verify, are not effective outside of AWS KMS.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairResponse : AWSModel


/**
 <p>The identifier of the CMK that encrypted the private key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The type of data key pair that was generated.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

/**
 <p>The encrypted copy of the private key. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable privateKeyCiphertextBlob;

/**
 <p>The plaintext copy of the private key. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable privateKeyPlaintext;

/**
 <p>The public key (in plaintext).</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairWithoutPlaintextRequest : AWSRequest


/**
 <p>Specifies the encryption context that will be used when encrypting the private key in the data key pair.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the CMK that encrypts the private key in the data key pair. You must specify a symmetric CMK. You cannot use an asymmetric CMK. To get the type of your CMK, use the <a>DescribeKey</a> operation. </p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Determines the type of data key pair that is generated.</p><p>The AWS KMS rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to sign and verify (but not both), and the rule that permits you to use ECC CMKs only to sign and verify, are not effective outside of AWS KMS.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairWithoutPlaintextResponse : AWSModel


/**
 <p>Specifies the CMK that encrypted the private key in the data key pair. You must specify a symmetric CMK. You cannot use an asymmetric CMK. To get the type of your CMK, use the <a>DescribeKey</a> operation.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The type of data key pair that was generated.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

/**
 <p>The encrypted copy of the private key. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable privateKeyCiphertextBlob;

/**
 <p>The public key (in plaintext).</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyRequest : AWSRequest


/**
 <p>Specifies the encryption context that will be used when encrypting the data key.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies the symmetric CMK that encrypts the data key.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p><p>You must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code> parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeySpec keySpec;

/**
 <p>Specifies the length of the data key in bytes. For example, use the value 64 to generate a 512-bit data key (64 bytes is 512 bits). For 128-bit (16-byte) and 256-bit (32-byte) data keys, use the <code>KeySpec</code> parameter.</p><p>You must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code> parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfBytes;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyResponse : AWSModel


/**
 <p>The encrypted copy of the data key. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The identifier of the CMK that encrypted the data key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The plaintext data key. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded. Use this data key to encrypt your data outside of KMS. Then, remove it from memory as soon as possible.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyWithoutPlaintextRequest : AWSRequest


/**
 <p>Specifies the encryption context that will be used when encrypting the data key.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>The identifier of the symmetric customer master key (CMK) that encrypts the data key.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeySpec keySpec;

/**
 <p>The length of the data key in bytes. For example, use the value 64 to generate a 512-bit data key (64 bytes is 512 bits). For common key lengths (128-bit and 256-bit symmetric keys), we recommend that you use the <code>KeySpec</code> field instead of this one.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfBytes;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyWithoutPlaintextResponse : AWSModel


/**
 <p>The encrypted data key. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The identifier of the CMK that encrypted the data key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGenerateRandomRequest : AWSRequest


/**
 <p>Generates the random byte string in the AWS CloudHSM cluster that is associated with the specified <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>The length of the byte string.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfBytes;

@end

/**
 
 */
@interface AWSKMSGenerateRandomResponse : AWSModel


/**
 <p>The random byte string. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSGetKeyPolicyRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the name of the key policy. The only valid name is <code>default</code>. To get the names of key policies, use <a>ListKeyPolicies</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 
 */
@interface AWSKMSGetKeyPolicyResponse : AWSModel


/**
 <p>A key policy document in JSON format.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

@end

/**
 
 */
@interface AWSKMSGetKeyRotationStatusRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK. To specify a CMK in a different AWS account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGetKeyRotationStatusResponse : AWSModel


/**
 <p>A Boolean value that specifies whether key rotation is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable keyRotationEnabled;

@end

/**
 
 */
@interface AWSKMSGetParametersForImportRequest : AWSRequest


/**
 <p>The identifier of the symmetric CMK into which you will import key material. The <code>Origin</code> of the CMK must be <code>EXTERNAL</code>.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The algorithm you will use to encrypt the key material before importing it with <a>ImportKeyMaterial</a>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt the Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSAlgorithmSpec wrappingAlgorithm;

/**
 <p>The type of wrapping key (public key) to return in the response. Only 2048-bit RSA public keys are supported.</p>
 */
@property (nonatomic, assign) AWSKMSWrappingKeySpec wrappingKeySpec;

@end

/**
 
 */
@interface AWSKMSGetParametersForImportResponse : AWSModel


/**
 <p>The import token to send in a subsequent <a>ImportKeyMaterial</a> request.</p>
 */
@property (nonatomic, strong) NSData * _Nullable importToken;

/**
 <p>The identifier of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request. This is the same CMK specified in the <code>GetParametersForImport</code> request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The time at which the import token and public key are no longer valid. After this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and you must send another <code>GetParametersForImport</code> request to get new ones.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable parametersValidTo;

/**
 <p>The public key to use to encrypt the key material before importing it with <a>ImportKeyMaterial</a>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

@end

/**
 
 */
@interface AWSKMSGetPublicKeyRequest : AWSRequest


/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies the asymmetric CMK that includes the public key.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGetPublicKeyResponse : AWSModel


/**
 <p>The type of the of the public key that was downloaded.</p>
 */
@property (nonatomic, assign) AWSKMSCustomerMasterKeySpec customerMasterKeySpec;

/**
 <p>The encryption algorithms that AWS KMS supports for this key. </p><p>This information is critical. If a public key encrypts data outside of AWS KMS by using an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p><p>This field appears in the response only when the <code>KeyUsage</code> of the public key is <code>ENCRYPT_DECRYPT</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable encryptionAlgorithms;

/**
 <p>The identifier of the asymmetric CMK from which the public key was downloaded.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The permitted use of the public key. Valid values are <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p><p>This information is critical. If a public key with <code>SIGN_VERIFY</code> key usage encrypts data outside of AWS KMS, the ciphertext cannot be decrypted. </p>
 */
@property (nonatomic, assign) AWSKMSKeyUsageType keyUsage;

/**
 <p>The exported public key. </p><p>This value is returned as a binary <a href="https://www.itu.int/ITU-T/studygroups/com17/languages/X.690-0207.pdf">Distinguished Encoding Rules</a> (DER)-encoded object. To decode it, use an ASN.1 parsing tool, such as <a href="https://www.openssl.org/docs/man1.0.2/man1/asn1parse.html">OpenSSL asn1parse</a>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

/**
 <p>The signing algorithms that AWS KMS supports for this key.</p><p>This field appears in the response only when the <code>KeyUsage</code> of the public key is <code>SIGN_VERIFY</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable signingAlgorithms;

@end

/**
 <p>Use this structure to allow cryptographic operations in the grant only when the operation request includes the specified <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption context</a>.</p><p>AWS KMS applies the grant constraints only when the grant allows a cryptographic operation that accepts an encryption context as input, such as the following.</p><ul><li><p><a>Encrypt</a></p></li><li><p><a>Decrypt</a></p></li><li><p><a>GenerateDataKey</a></p></li><li><p><a>GenerateDataKeyWithoutPlaintext</a></p></li><li><p><a>ReEncrypt</a></p></li></ul><p>AWS KMS does not apply the grant constraints to other operations, such as <a>DescribeKey</a> or <a>ScheduleKeyDeletion</a>.</p><important><p>In a cryptographic operation, the encryption context in the decryption operation must be an exact, case-sensitive match for the keys and values in the encryption context of the encryption operation. Only the order of the pairs can vary.</p><p>However, in a grant constraint, the key in each key-value pair is not case sensitive, but the value is case sensitive.</p><p>To avoid confusion, do not use multiple encryption context pairs that differ only by case. To require a fully case-sensitive encryption context, use the <code>kms:EncryptionContext:</code> and <code>kms:EncryptionContextKeys</code> conditions in an IAM or key policy. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-context">kms:EncryptionContext:</a> in the <i><i>AWS Key Management Service Developer Guide</i></i>.</p></important>
 */
@interface AWSKMSGrantConstraints : AWSModel


/**
 <p>A list of key-value pairs that must match the encryption context in the cryptographic operation request. The grant allows the operation only when the encryption context in the request is the same as the encryption context specified in this constraint.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContextEquals;

/**
 <p>A list of key-value pairs that must be included in the encryption context of the cryptographic operation request. The grant allows the cryptographic operation only when the encryption context in the request includes the key-value pairs specified in this constraint, although it can include additional key-value pairs.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContextSubset;

@end

/**
 <p>Contains information about an entry in a list of grants.</p>
 */
@interface AWSKMSGrantListEntry : AWSModel


/**
 <p>A list of key-value pairs that must be present in the encryption context of certain subsequent operations that the grant allows.</p>
 */
@property (nonatomic, strong) AWSKMSGrantConstraints * _Nullable constraints;

/**
 <p>The date and time when the grant was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>The unique identifier for the grant.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>The principal that receives the grant's permissions.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granteePrincipal;

/**
 <p>The AWS account under which the grant was issued.</p>
 */
@property (nonatomic, strong) NSString * _Nullable issuingAccount;

/**
 <p>The unique identifier for the customer master key (CMK) to which the grant applies.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The friendly name that identifies the grant. If a name was provided in the <a>CreateGrant</a> request, that name is returned. Otherwise this value is null.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The list of operations permitted by the grant.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable operations;

/**
 <p>The principal that can retire the grant.</p>
 */
@property (nonatomic, strong) NSString * _Nullable retiringPrincipal;

@end

/**
 
 */
@interface AWSKMSImportKeyMaterialRequest : AWSRequest


/**
 <p>The encrypted key material to import. The key material must be encrypted with the public wrapping key that <a>GetParametersForImport</a> returned, using the wrapping algorithm that you specified in the same <code>GetParametersForImport</code> request.</p>
 */
@property (nonatomic, strong) NSData * _Nullable encryptedKeyMaterial;

/**
 <p>Specifies whether the key material expires. The default is <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the <code>ValidTo</code> parameter. When this parameter is set to <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the <code>ValidTo</code> parameter.</p>
 */
@property (nonatomic, assign) AWSKMSExpirationModelType expirationModel;

/**
 <p>The import token that you received in the response to a previous <a>GetParametersForImport</a> request. It must be from the same response that contained the public key that you used to encrypt the key material.</p>
 */
@property (nonatomic, strong) NSData * _Nullable importToken;

/**
 <p>The identifier of the symmetric CMK that receives the imported key material. The CMK's <code>Origin</code> must be <code>EXTERNAL</code>. This must be the same CMK specified in the <code>KeyID</code> parameter of the corresponding <a>GetParametersForImport</a> request.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The time at which the imported key material expires. When the key material expires, AWS KMS deletes the key material and the CMK becomes unusable. You must omit this parameter when the <code>ExpirationModel</code> parameter is set to <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validTo;

@end

/**
 
 */
@interface AWSKMSImportKeyMaterialResponse : AWSModel


@end

/**
 <p>Contains information about each entry in the key list.</p>
 */
@interface AWSKMSKeyListEntry : AWSModel


/**
 <p>ARN of the key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyArn;

/**
 <p>Unique identifier of the key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 <p>Contains metadata about a customer master key (CMK).</p><p>This data type is used as a response element for the <a>CreateKey</a> and <a>DescribeKey</a> operations.</p>
 Required parameters: [KeyId]
 */
@interface AWSKMSKeyMetadata : AWSModel


/**
 <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
 */
@property (nonatomic, strong) NSString * _Nullable AWSAccountId;

/**
 <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS General Reference</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for the CMK. When you create a CMK in a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>, AWS KMS creates the key material for the CMK in the associated AWS CloudHSM cluster. This value is present only when the CMK is created in a custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>The date and time when the CMK was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>A unique identifier for the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a> that contains the CMK. This value is present only when the CMK is created in a custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Describes the type of key material in the CMK.</p>
 */
@property (nonatomic, assign) AWSKMSCustomerMasterKeySpec customerMasterKeySpec;

/**
 <p>The date and time after which AWS KMS deletes the CMK. This value is present only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deletionDate;

/**
 <p>The description of the CMK.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Specifies whether the CMK is enabled. When <code>KeyState</code> is <code>Enabled</code> this value is true, otherwise it is false.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>A list of encryption algorithms that the CMK supports. You cannot use the CMK with other encryption algorithms within AWS KMS.</p><p>This field appears only when the <code>KeyUsage</code> of the CMK is <code>ENCRYPT_DECRYPT</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable encryptionAlgorithms;

/**
 <p>Specifies whether the CMK's key material expires. This value is present only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is omitted.</p>
 */
@property (nonatomic, assign) AWSKMSExpirationModelType expirationModel;

/**
 <p>The globally unique identifier for the CMK.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The manager of the CMK. CMKs in your AWS account are either customer managed or AWS managed. For more information about the difference, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSKeyManagerType keyManager;

/**
 <p>The state of the CMK.</p><p>For more information about how key state affects the use of a CMK, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSKeyState keyState;

/**
 <p>The cryptographic operations for which you can use the CMK.</p>
 */
@property (nonatomic, assign) AWSKMSKeyUsageType keyUsage;

/**
 <p>The source of the CMK's key material. When this value is <code>AWS_KMS</code>, AWS KMS created the key material. When this value is <code>EXTERNAL</code>, the key material was imported from your existing key management infrastructure or the CMK lacks key material. When this value is <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM cluster associated with a custom key store.</p>
 */
@property (nonatomic, assign) AWSKMSOriginType origin;

/**
 <p>A list of signing algorithms that the CMK supports. You cannot use the CMK with other signing algorithms within AWS KMS.</p><p>This field appears only when the <code>KeyUsage</code> of the CMK is <code>SIGN_VERIFY</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable signingAlgorithms;

/**
 <p>The time at which the imported key material expires. When the key material expires, AWS KMS deletes the key material and the CMK becomes unusable. This value is present only for CMKs whose <code>Origin</code> is <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validTo;

@end

/**
 
 */
@interface AWSKMSListAliasesRequest : AWSRequest


/**
 <p>Lists only aliases that refer to the specified CMK. The value of this parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's account and region. You cannot use an alias name or alias ARN in this value.</p><p>This parameter is optional. If you omit it, <code>ListAliases</code> returns all aliases in the account and region.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 100, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListAliasesResponse : AWSModel


/**
 <p>A list of aliases.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSAliasListEntry *> * _Nullable aliases;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListGrantsRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK. To specify a CMK in a different AWS account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 100, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListGrantsResponse : AWSModel


/**
 <p>A list of grants.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSGrantListEntry *> * _Nullable grants;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListKeyPoliciesRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 1000, inclusive. If you do not include a value, it defaults to 100.</p><p>Only one policy can be attached to a key.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListKeyPoliciesResponse : AWSModel


/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A list of key policy names. The only valid value is <code>default</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable policyNames;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListKeysRequest : AWSRequest


/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 1000, inclusive. If you do not include a value, it defaults to 100.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListKeysResponse : AWSModel


/**
 <p>A list of customer master keys (CMKs).</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSKeyListEntry *> * _Nullable keys;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListResourceTagsRequest : AWSRequest


/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 50, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p><p>Do not attempt to construct this value. Use only the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListResourceTagsResponse : AWSModel


/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p><p>Do not assume or infer any information from this value.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A list of tags. Each tag consists of a tag key and a tag value.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListRetirableGrantsRequest : AWSRequest


/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, AWS KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 100, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

/**
 <p>The retiring principal for which to list grants.</p><p>To specify the retiring principal, use the <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS accounts (root), IAM users, federated users, and assumed role users. For examples of the ARN syntax for specifying a principal, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS Identity and Access Management (IAM)</a> in the Example ARNs section of the <i>Amazon Web Services General Reference</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable retiringPrincipal;

@end

/**
 
 */
@interface AWSKMSPutKeyPolicyRequest : AWSRequest


/**
 <p>A flag to indicate whether to bypass the key policy lockout safety check.</p><important><p>Setting this value to true increases the risk that the CMK becomes unmanageable. Do not set this value to true indiscriminately.</p><p>For more information, refer to the scenario in the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default Key Policy</a> section in the <i>AWS Key Management Service Developer Guide</i>.</p></important><p>Use this parameter only when you intend to prevent the principal that is making the request from making a subsequent <code>PutKeyPolicy</code> request on the CMK.</p><p>The default value is false.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bypassPolicyLockoutSafetyCheck;

/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The key policy to attach to the CMK.</p><p>The key policy must meet the following criteria:</p><ul><li><p>If you don't set <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow the principal that is making the <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code> request on the CMK. This reduces the risk that the CMK becomes unmanageable. For more information, refer to the scenario in the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default Key Policy</a> section of the <i>AWS Key Management Service Developer Guide</i>.</p></li><li><p>Each statement in the key policy must contain one or more principals. The principals in the key policy must exist and be visible to AWS KMS. When you create a new AWS principal (for example, an IAM user or role), you might need to enforce a delay before including the new principal in a key policy because the new principal might not be immediately visible to AWS KMS. For more information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes that I make are not always immediately visible</a> in the <i>AWS Identity and Access Management User Guide</i>.</p></li></ul><p>The key policy cannot exceed 32 kilobytes (32768 bytes). For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/resource-limits.html">Resource Quotas</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

/**
 <p>The name of the key policy. The only valid value is <code>default</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 
 */
@interface AWSKMSReEncryptRequest : AWSRequest


/**
 <p>Ciphertext of the data to reencrypt.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>, represents the encryption algorithm used for symmetric CMKs.</p><p>This parameter is required only when the destination CMK is an asymmetric CMK.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec destinationEncryptionAlgorithm;

/**
 <p>Specifies that encryption context to use when the reencrypting the data.</p><p>A destination encryption context is valid only when the destination CMK is a symmetric CMK. The standard ciphertext format for asymmetric CMKs does not include fields for metadata.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable destinationEncryptionContext;

/**
 <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a symmetric or asymmetric CMK with a <code>KeyUsage</code> value of <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK, use the <a>DescribeKey</a> operation.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationKeyId;

/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the ciphertext before it is reencrypted. The default value, <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric CMKs.</p><p>Specify the same algorithm that was used to encrypt the ciphertext. If you specify a different algorithm, the decrypt attempt fails.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric CMK.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec sourceEncryptionAlgorithm;

/**
 <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the same encryption context that was used to encrypt the ciphertext.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represents additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is optional when encrypting with a symmetric CMK, but it is highly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable sourceEncryptionContext;

/**
 <p>A unique identifier for the CMK that is used to decrypt the ciphertext before it reencrypts it using the destination CMK.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the metadata that it adds to the ciphertext blob to determine which CMK was used to encrypt the ciphertext. However, you can use this parameter to ensure that a particular CMK (of any kind) is used to decrypt the ciphertext before it is reencrypted.</p><p>If you specify a <code>KeyId</code> value, the decrypt part of the <code>ReEncrypt</code> operation succeeds only if the specified CMK was used to encrypt the ciphertext.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceKeyId;

@end

/**
 
 */
@interface AWSKMSReEncryptResponse : AWSModel


/**
 <p>The reencrypted data. When you use the HTTP API or the AWS CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The encryption algorithm that was used to reencrypt the data.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec destinationEncryptionAlgorithm;

/**
 <p>Unique identifier of the CMK used to reencrypt the data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The encryption algorithm that was used to decrypt the ciphertext before it was reencrypted.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec sourceEncryptionAlgorithm;

/**
 <p>Unique identifier of the CMK used to originally encrypt the data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceKeyId;

@end

/**
 
 */
@interface AWSKMSRetireGrantRequest : AWSRequest


/**
 <p>Unique identifier of the grant to retire. The grant ID is returned in the response to a <code>CreateGrant</code> operation.</p><ul><li><p>Grant ID Example - 0123456789012345678901234567890123456789012345678901234567890123</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>Token that identifies the grant to be retired.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantToken;

/**
 <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p><p>For example: <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSRevokeGrantRequest : AWSRequest


/**
 <p>Identifier of the grant to be revoked.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>A unique identifier for the customer master key associated with the grant.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK. To specify a CMK in a different AWS account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSScheduleKeyDeletionRequest : AWSRequest


/**
 <p>The unique identifier of the customer master key (CMK) to delete.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The waiting period, specified in number of days. After the waiting period ends, AWS KMS deletes the customer master key (CMK).</p><p>This value is optional. If you include a value, it must be between 7 and 30, inclusive. If you do not include a value, it defaults to 30.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable pendingWindowInDays;

@end

/**
 
 */
@interface AWSKMSScheduleKeyDeletionResponse : AWSModel


/**
 <p>The date and time after which AWS KMS deletes the customer master key (CMK).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deletionDate;

/**
 <p>The unique identifier of the customer master key (CMK) for which deletion is scheduled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSSignRequest : AWSRequest


/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the <a>DescribeKey</a> operation.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the message or message digest to sign. Messages can be 0-4096 bytes. To sign a larger message, provide the message digest.</p><p>If you provide a message, AWS KMS generates a hash digest of the message and then signs it.</p>
 */
@property (nonatomic, strong) NSData * _Nullable message;

/**
 <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a message or message digest. To indicate a message, enter <code>RAW</code>. To indicate a message digest, enter <code>DIGEST</code>.</p>
 */
@property (nonatomic, assign) AWSKMSMessageType messageType;

/**
 <p>Specifies the signing algorithm to use when signing the message. </p><p>Choose an algorithm that is compatible with the type and size of the specified asymmetric CMK.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 
 */
@interface AWSKMSSignResponse : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign the message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The cryptographic signature that was generated for the message.</p>
 */
@property (nonatomic, strong) NSData * _Nullable signature;

/**
 <p>The signing algorithm that was used to sign the message.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 <p>A key-value pair. A tag consists of a tag key and a tag value. Tag keys and tag values are both required, but tag values can be empty (null) strings.</p><p>For information about the rules that apply to tag keys and tag values, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
 Required parameters: [TagKey, TagValue]
 */
@interface AWSKMSTag : AWSModel


/**
 <p>The key of the tag.</p>
 */
@property (nonatomic, strong) NSString * _Nullable tagKey;

/**
 <p>The value of the tag.</p>
 */
@property (nonatomic, strong) NSString * _Nullable tagValue;

@end

/**
 
 */
@interface AWSKMSTagResourceRequest : AWSRequest


/**
 <p>A unique identifier for the CMK you are tagging.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSKMSUntagResourceRequest : AWSRequest


/**
 <p>A unique identifier for the CMK from which you are removing tags.</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable tagKeys;

@end

/**
 
 */
@interface AWSKMSUpdateAliasRequest : AWSRequest


/**
 <p>Identifies the alias that is changing its CMK. This value must begin with <code>alias/</code> followed by the alias name, such as <code>alias/ExampleAlias</code>. You cannot use UpdateAlias to change the alias name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

/**
 <p>Identifies the CMK to associate with the alias. When the update operation completes, the alias will point to this CMK. </p><p>The CMK must be in the same AWS account and Region as the alias. Also, the new target CMK must be the same type as the current target CMK (both symmetric or both asymmetric) and they must have the same key usage. </p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p><p>To verify that the alias is mapped to the correct CMK, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable targetKeyId;

@end

/**
 
 */
@interface AWSKMSUpdateCustomKeyStoreRequest : AWSRequest


/**
 <p>Associates the custom key store with a related AWS CloudHSM cluster. </p><p>Enter the cluster ID of the cluster that you used to create the custom key store or a cluster that shares a backup history and has the same cluster certificate as the original cluster. You cannot use this parameter to associate a custom key store with an unrelated cluster. In addition, the replacement cluster must <a href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill the requirements</a> for a cluster associated with a custom key store. To view the cluster certificate of a cluster, use the <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>Identifies the custom key store that you want to update. Enter the ID of the custom key store. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in the AWS CloudHSM cluster that is associated with the custom key store.</p><p>This parameter tells AWS KMS the current password of the <code>kmsuser</code> crypto user (CU). It does not set or change the password of any users in the AWS CloudHSM cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyStorePassword;

/**
 <p>Changes the friendly name of the custom key store to the value that you specify. The custom key store name must be unique in the AWS account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable latestCustomKeyStoreName;

@end

/**
 
 */
@interface AWSKMSUpdateCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSUpdateKeyDescriptionRequest : AWSRequest


/**
 <p>New description for the CMK.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>A unique identifier for the customer master key (CMK).</p><p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSVerifyRequest : AWSRequest


/**
 <p>A list of grant tokens.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies the asymmetric CMK that will be used to verify the signature. This must be the same CMK that was used to generate the signature. If you specify a different CMK, the signature verification fails.</p><p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the message that was signed. You can submit a raw message of up to 4096 bytes, or a hash digest of the message. If you submit a digest, use the <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p><p>If the message specified here is different from the message that was signed, the signature verification fails. A message and its hash digest are considered to be the same message.</p>
 */
@property (nonatomic, strong) NSData * _Nullable message;

/**
 <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a message or message digest. The default value, RAW, indicates a message. To indicate a message digest, enter <code>DIGEST</code>.</p><important><p>Use the <code>DIGEST</code> value only when the value of the <code>Message</code> parameter is a message digest. If you use the <code>DIGEST</code> value with a raw message, the security of the verification operation can be compromised.</p></important>
 */
@property (nonatomic, assign) AWSKMSMessageType messageType;

/**
 <p>The signature that the <code>Sign</code> operation generated.</p>
 */
@property (nonatomic, strong) NSData * _Nullable signature;

/**
 <p>The signing algorithm that was used to sign the message. If you submit a different algorithm, the signature verification fails.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 
 */
@interface AWSKMSVerifyResponse : AWSModel


/**
 <p>The unique identifier for the asymmetric CMK that was used to verify the signature.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>A Boolean value that indicates whether the signature was verified. A value of <code>True</code> indicates that the <code>Signature</code> was produced by signing the <code>Message</code> with the specified <code>KeyID</code> and <code>SigningAlgorithm.</code> If the signature is not verified, the <code>Verify</code> operation fails with a <code>KMSInvalidSignatureException</code> exception. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable signatureValid;

/**
 <p>The signing algorithm that was used to verify the signature.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

NS_ASSUME_NONNULL_END
