import hashlib

message = input()
md5_hash = hashlib.md5()
md5_hash.update(message.encode('utf-8'))
hash_value = md5_hash.hexdigest()

print(hash_value)

# 蒙德-龙脊雪山-雪葬之都·旧宫
