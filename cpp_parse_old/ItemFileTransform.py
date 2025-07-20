from lark import Transformer, v_args, Discard

class ItemEntry:
    rg_id="RG_NONE"
    englishName="No Item"
    frenchName = "Rien"
    germanName = "Kein Artikel"
    itemType = "ITEMTYPE_EVENT"
    getItemID: str|int = "GI_RUPEE_GREEN"
    adv=False
    logicVal="LOGIC_NONE"
    hintKey="RHT_NONE"
    itemID: str|int ="ITEM_NONE"
    objectID=0
    drawID=0
    textID=0
    field=0
    chestAnim=0
    category="ITEM_CATEGORY_JUNK"
    modIndex="MOD_NONE"
    progressive=False
    price=0
    def __init__(self, rg_id="RG_NONE", englishName="No Item", frenchName = "Rien", germanName = "Kein Artikel", itemType = "ITEMTYPE_EVENT", getItemID = "GI_RUPEE_GREEN", \
                adv=False, logicVal="LOGIC_NONE", hintKey="RHT_NONE", itemID="ITEM_NONE", objectID=0, drawID=0, textID=0, field=0, chestAnim=0, category="ITEM_CATEGORY_JUNK", \
                modIndex="MOD_NONE", progressive=False, price=0):
        self.rg_id = rg_id
        self.englishName = englishName
        self.frenchName = frenchName
        self.germanName = germanName
        self.itemType = itemType
        self.getItemID = getItemID
        self.adv = adv
        self.logicVal = logicVal
        self.hintKey = hintKey
        self.itemID = itemID
        self.objectID = objectID
        self.drawID = drawID
        self.textID = textID
        self.field = field
        self.chestAnim = chestAnim
        self.category = category
        self.modIndex = modIndex
        self.progressive = progressive
        self.price = price

class ItemFileTransformer(Transformer):
    item_table_entry = v_args(inline=True)(ItemEntry.__init__)
    non_entry = lambda self, s: Discard
    draw_func = lambda self, s: Discard
    file = list