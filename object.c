#include <stdio.h>
#include <stdlib.h>
#include "main.h"

typedef enum WeaponType
{
	WEAPON_NONE,
	WEAPON_ARC,
	WEAPON_GANT_DE_COMBAT,
	WEAPON_EPEE,
	WEAPON_MAX,
}
	WeaponType;

typedef enum MagieType
{
	MAGIE_NONE,
	MAGIE_DE_GLACE,
	MAGIE_DE_FEU,
	MAGIE_DE_VENT,
	MAGIE_DE_FOUDRE,
	MAGIE_DEAU,
	MAGIE_MAX,
}
	MagieType;

typedef enum ShieldType
{
	SHIELD_NONE,
	SHIELD_BOUCLIER,
	SHIELD_MAX,
}
	ShieldType;

typedef struct Object
{
	int type;
	union
	{
	struct Weapon
	{
	WeaponType type;
	int damage;
	Dice* damage_dice;
	}
	weapon;
	struct Shield
	{
	ShieldType type;
	int protection;
	Dice* protection_dice;
	}
	defense;
	}
	u;
}
Object;

typedef Object* (*FusedObjectCreator)();

	Object* create_fused_object(WeaponType weapon_type, MagieType magie_type, ShieldType defense_type)
	{
	if (weapon_type >= WEAPON_MAX || magie_type >= MAGIC_MAX || defense_type >= SHIELD_MAX)
	return NULL;
	}

	FusedObjectCreator creator = fused_object_creators[weapon_type][magie_type];
	if (!creator)
	{
	return NULL;
	}

	Object* new_object = creator();
	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = get_fused_weapon_type(weapon_type, magie_type);
	new_object->u.weapon.damage = get_fused_object_damage(weapon_type, magie_type);

	return new_object;

	creator = fused_object_creators[defense_type][magie_type];
	if (!creator)
	{
	return NULL;
	}

	Object* new_object_shield = creator();
	new_object_shield->type = OBJECT_TYPE_SHIELD;
	new_object_shield->u.defense.type = get_fused_defense_type(defense_type, magie_type);
	new_object_shield->u.defense.protection = get_fused_object_protection(defense_type, magie_type);

	return new_object_shield;

Object* create_arc_de_glace()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = WEAPON_ARC;
	new_object->u.weapon.damage = 15;

	Dice* damage_dice = malloc(sizeof(Dice));
	if (damage_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	damage_dice->num_faces = 7;
	damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
	if (damage_dice->faces == NULL)
	{
	free(new_object);
	free(damage_dice);
	return NULL;
	}

	damage_dice->faces[0] = 1;
	damage_dice->faces[1] = 5;
	damage_dice->faces[2] = 25;
	damage_dice->faces[3] = 50;
	damage_dice->faces[4] = 75;
	damage_dice->faces[5] = 100;
	damage_dice->faces[6] = 777;

	new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_arc_de_feu()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = WEAPON_ARC;
	new_object->u.weapon.damage = 15;

	Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_arc_de_vent()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_ARC;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }
        
        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_arc_de_foudre()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_ARC;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }
        
        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_arc_deau()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_ARC;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_poing_de_combat_de_glace()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_POING_DE_COMBAT;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_poing_de_combat_de_feu()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_POING_DE_COMBAT;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

        return new_object;
}

Object* create_poing_de_combat_de_foudre()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_POING_DE_COMBAT;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

        return new_object;
}

Object* create_poing_de_combat_de_vent()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_POING_DE_COMBAT;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

        return new_object;
}

Object* create_poing_de_combat_deau()
{
        Object *new_object = malloc(sizeof(Object));
        if (new_object == NULL)
        {
        return NULL;
        }

        new_object->type = OBJECT_TYPE_WEAPON;
        new_object->u.weapon.type = WEAPON_POING_DE_COMBAT;
        new_object->u.weapon.damage = 15;

        Dice* damage_dice = malloc(sizeof(Dice));
        if (damage_dice == NULL)
        {
        free(new_object);
        return NULL;
        }

        damage_dice->num_faces = 7;
        damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
        if (damage_dice->faces == NULL)
        {
        free(new_object);
        free(damage_dice);
        return NULL;
        }

        damage_dice->faces[0] = 1;
        damage_dice->faces[1] = 5;
        damage_dice->faces[2] = 25;
        damage_dice->faces[3] = 50;
        damage_dice->faces[4] = 75;
        damage_dice->faces[5] = 100;
        damage_dice->faces[6] = 777;

        new_object->u.weapon.damage_dice = damage_dice;

        return new_object;
}

Object* create_epee_de_glace()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = WEAPON_EPEE;
	new_object->u.weapon.damage = 15;

	Dice* damage_dice = malloc(sizeof(Dice));
	if (damage_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	damage_dice->num_faces = 7;
	damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
	if (damage_dice->faces == NULL)
	{
	free(new_object);
	free(damage_dice);
	return NULL;
	}

	damage_dice->faces[0] = 1;
	damage_dice->faces[1] = 5;
	damage_dice->faces[2] = 25;
	damage_dice->faces[3] = 50;
	damage_dice->faces[4] = 75;
	damage_dice->faces[5] = 100;
	damage_dice->faces[6] = 777;

	new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_epee_de_foudre()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = WEAPON_EPEE;
	new_object->u.weapon.damage = 15;

	Dice* damage_dice = malloc(sizeof(Dice));
	if (damage_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	damage_dice->num_faces = 7;
	damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
	if (damage_dice->faces == NULL)
	{
	free(new_object);
	free(damage_dice);
	return NULL;
	}

	damage_dice->faces[0] = 1;
	damage_dice->faces[1] = 5;
	damage_dice->faces[2] = 25;
	damage_dice->faces[3] = 50;
	damage_dice->faces[4] = 75;
	damage_dice->faces[5] = 100;
	damage_dice->faces[6] = 777;

	new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_epee_de_vent()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = WEAPON_EPEE;
	new_object->u.weapon.damage = 15;

	Dice* damage_dice = malloc(sizeof(Dice));
	if (damage_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	damage_dice->num_faces = 7;
	damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
	if (damage_dice->faces == NULL)
	{
	free(new_object);
	free(damage_dice);
	return NULL;
	}

	damage_dice->faces[0] = 1;
	damage_dice->faces[1] = 5;
	damage_dice->faces[2] = 25;
	damage_dice->faces[3] = 50;
	damage_dice->faces[4] = 75;
	damage_dice->faces[5] = 100;
	damage_dice->faces[6] = 777;

	new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_epee_deau()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_WEAPON;
	new_object->u.weapon.type = WEAPON_EPEE;
	new_object->u.weapon.damage = 15;

	Dice* damage_dice = malloc(sizeof(Dice));
	if (damage_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	damage_dice->num_faces = 7;
	damage_dice->faces = malloc(damage_dice->num_faces * sizeof(int));
	if (damage_dice->faces == NULL)
	{
	free(new_object);
	free(damage_dice);
	return NULL;
	}

	damage_dice->faces[0] = 1;
	damage_dice->faces[1] = 5;
	damage_dice->faces[2] = 25;
	damage_dice->faces[3] = 50;
	damage_dice->faces[4] = 75;
	damage_dice->faces[5] = 100;
	damage_dice->faces[6] = 777;

	new_object->u.weapon.damage_dice = damage_dice;

	return new_object;
}

Object* create_bouclier_de_glace()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_SHIELD;
	new_object->u.defense.type = SHIELD_BOUCLIER;
	new_object->u.defense.protection = 15;

	Dice* protection_dice = malloc(sizeof(Dice));
	if (protection_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	protection_dice->num_faces = 7;
	protection_dice->faces = malloc(protection_dice->num_faces * sizeof(int));
	if (protection_dice->faces == NULL)
	{
	free(new_object);
	free(protection_dice);
	return NULL;
	}

	protection_dice->faces[0] = 1;
	protection_dice->faces[1] = 5;
	protection_dice->faces[2] = 25;
	protection_dice->faces[3] = 50;
	protection_dice->faces[4] = 75;
	protection_dice->faces[5] = 100;
	protection_dice->faces[6] = 777;

	new_object->u.defense.protection_dice = protection_dice;

	return new_object;
}

Object* create_bouclier_de_feu()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_SHIELD;
	new_object->u.defense.type = SHIELD_BOUCLIER;
	new_object->u.defense.protection = 15;

	Dice* protection_dice = malloc(sizeof(Dice));
	if (protection_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	protection_dice->num_faces = 7;
	protection_dice->faces = malloc(protection_dice->num_faces * sizeof(int));
	if (protection_dice->faces == NULL)
	{
	free(new_object);
	free(protection_dice);
	return NULL;
	}

	protection_dice->faces[0] = 1;
	protection_dice->faces[1] = 5;
	protection_dice->faces[2] = 25;
	protection_dice->faces[3] = 50;
	protection_dice->faces[4] = 75;
	protection_dice->faces[5] = 100;
	protection_dice->faces[6] = 777;

	new_object->u.defense.protection_dice = protection_dice;

	return new_object;
}

Object* create_bouclier_de_foudre()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_SHIELD;
	new_object->u.defense.type = SHIELD_BOUCLIER;
	new_object->u.defense.protection = 15;

	Dice* protection_dice = malloc(sizeof(Dice));
	if (protection_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	protection_dice->num_faces = 7;
	protection_dice->faces = malloc(protection_dice->num_faces * sizeof(int));
	if (protection_dice->faces == NULL)
	{
	free(new_object);
	free(protection_dice);
	return NULL;
	}

	protection_dice->faces[0] = 1;
	protection_dice->faces[1] = 5;
	protection_dice->faces[2] = 25;
	protection_dice->faces[3] = 50;
	protection_dice->faces[4] = 75;
	protection_dice->faces[5] = 100;
	protection_dice->faces[6] = 777;

	new_object->u.defense.protection_dice = protection_dice;

	return new_object;
}

Object* create_bouclier_de_vent()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_SHIELD;
	new_object->u.defense.type = SHIELD_BOUCLIER;
	new_object->u.defense.protection = 15;

	Dice* protection_dice = malloc(sizeof(Dice));
	if (protection_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	protection_dice->num_faces = 7;
	protection_dice->faces = malloc(protection_dice->num_faces * sizeof(int));
	if (protection_dice->faces == NULL)
	{
	free(new_object);
	free(protection_dice);
	return NULL;
	}

	protection_dice->faces[0] = 1;
	protection_dice->faces[1] = 5;
	protection_dice->faces[2] = 25;
	protection_dice->faces[3] = 50;
	protection_dice->faces[4] = 75;
	protection_dice->faces[5] = 100;
	protection_dice->faces[6] = 777;

	new_object->u.defense.protection_dice = protection_dice;

	return new_object;
}

Object* create_bouclier_deau()
{
	Object *new_object = malloc(sizeof(Object));
	if (new_object == NULL)
	{
	return NULL;
	}

	new_object->type = OBJECT_TYPE_SHIELD;
	new_object->u.defense.type = SHIELD_BOUCLIER;
	new_object->u.defense.protection = 15;

	Dice* protection_dice = malloc(sizeof(Dice));
	if (protection_dice == NULL)
	{
	free(new_object);
	return NULL;
	}

	protection_dice->num_faces = 7;
	protection_dice->faces = malloc(protection_dice->num_faces * sizeof(int));
	if (protection_dice->faces == NULL)
	{
	free(new_object);
	free(protection_dice);
	return NULL;
	}

	protection_dice->faces[0] = 1;
	protection_dice->faces[1] = 5;
	protection_dice->faces[2] = 25;
	protection_dice->faces[3] = 50;
	protection_dice->faces[4] = 75;
	protection_dice->faces[5] = 100;
	protection_dice->faces[6] = 777;

	new_object->u.defense.protection_dice = protection_dice;

	return new_object;
}
