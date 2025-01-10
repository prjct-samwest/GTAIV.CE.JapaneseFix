void main()
{
    boolean bVar2;
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    boolean bVar7;
    int I;
    int iVar9;
    int iVar10;
    boolean bVar11;

    l_U0 = 0.45400000;
    l_U1 = 0.04400000;
    l_U2 = 0.24400000;
    l_U3 = 0.07400000;
    l_U4 = 0.06600000;
    l_U5 = 0.09400000;
    l_U6 = 0.06400000;
    l_U7 = 0.09300000;
    l_U8 = 0.29200000;
    l_U9 = 0.28900000;
    l_U10 = 0;
    l_U11 = 86.00000000;
    l_U12 = 274.00000000;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U18 = -1;
    l_U130 = 15.00000000;
    l_U131 = 35.00000000;
    l_U132 = 16.00000000;
    l_U133 = 0.00000000;
    l_U139 = 1000.00000000;
    l_U140 = 7500.00000000;
    l_U149 = 1;
    l_U150 = 30.00000000;
    l_U151 = 30.00000000;
    l_U152 = 2.00000000;
    l_U162 = 0.00000000;
    l_U163 = 0.00000000;
    l_U175 = 1;
    l_U176 = 0;
    l_U177 = -1;
    l_U178 = 1;
    l_U179 = -1;
    l_U180 = -1;
    l_U181 = 15.00000000;
    l_U208 = 0;
    l_U209 = -1949702649;
    l_U210 = 2075870698;
    l_U215 = 0.12000000;
    l_U226 = 0.00000000;
    l_U227 = 0.00000000;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U231 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U269 = 0;
    l_U270 = 0;
    l_U271 = nil;
    l_U272 = nil;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    I = 0;
    iVar9 = 0;
    iVar10 = 0;
    while (true)
    {
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            for ( I = 0; I < 6; I++ )
            {
                g_U39058[I]._fU20 = -1;
            }
            for ( I = 0; I < 5; I++ )
            {
                g_U39042[I]._fU0 = -1;
            }
            sub_548();
            sub_627();
            g_U11180[0] = 0.00000000;
            g_U11180[1] = 0.00000000;
            bVar2 = false;
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            I = 0;
            iVar9 = 0;
            iVar10 = 0;
            l_U269 = 0;
            l_U270 = 0;
            g_U39101 = 0;
            g_U39102 = 0;
            g_U39103 = 0;
            g_U39104 = 0;
            g_U39105 = 0;
        }
        if ((NOT bVar2) AND (NOT bVar4))
        {
            for ( I = 0; I < 6; I++ )
            {
                if (g_U39058[I]._fU20 == -2)
                {
                    bVar2 = true;
                }
            }
        }
        if ((NOT bVar3) AND (NOT bVar4))
        {
            if (NOT (g_U39042[0]._fU0 == -1))
            {
                bVar3 = true;
            }
        }
        if (sub_909())
        {
            if (g_U39102)
            {
                l_U269 = 1;
            }
        }
        if (g_U39104)
        {
            sub_1004( 0, 1.00000000, 1 );
            g_U39104 = 0;
        }
        if (g_U39105)
        {
            sub_1004( 1, 1.00000000, 1 );
            g_U39105 = 0;
        }
        if ((((g_U39101) AND (NOT g_U10974._fU0)) AND (NOT IS_AUTO_SAVE_IN_PROGRESS())) AND (NOT g_U38757))
        {
            g_U39101 = 0;
            if ((bVar2) || (bVar3))
            {
                iVar10 = sub_3156();
                iVar9 = sub_4221();
                bVar4 = true;
                l_U233 = sub_4456();
                l_U270 = g_U15728[12];
                SETTIMERA( 0 );
            }
        }
        g_U39103 = 0;
        if (bVar4)
        {
            if ((TIMERA() > 8000) AND (g_U15728[11]))
            {
                bVar4 = false;
                bVar6 = false;
                bVar2 = false;
                bVar3 = false;
                l_U269 = 0;
                iVar10 = 0;
                iVar9 = 0;
                sub_548();
                sub_627();
                g_U11180[0] = 0.00000000;
                g_U11180[1] = 0.00000000;
                g_U39102 = 0;
                g_U15728[12] = 0;
                if (NOT (l_U272 == nil))
                {
                    WAIT( 0 );
                    RELEASE_TEXTURE( l_U272 );
                }
                l_U271 = nil;
                l_U272 = nil;
            }
            else
            {
                bVar6 = true;
                l_U227 = 1.00000000;
                sub_4724( iVar10, iVar9 );
                g_U39103 = 1;
            }
        }
        bVar11 = ((IS_USING_CONTROLLER()) AND (IS_BUTTON_JUST_PRESSED( 0, 9 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 99 )));
        if ((((NOT bVar5) AND (NOT bVar6)) AND (g_U39102)) AND (NOT g_U11115))
        {
            if (bVar11)
            {
                bVar5 = true;
                bVar11 = false;
                l_U233 = sub_4456();
                SETTIMERA( 0 );
            }
        }
        else if (bVar6)
        {
            bVar5 = false;
        }
        if (bVar5)
        {
            bVar7 = false;
            if (NOT (IS_CHAR_DEAD( sub_8107() )))
            {
                if (IS_PLAYER_CONTROL_ON( sub_8161() ))
                {
                    bVar7 = true;
                }
            }
            if (((((((TIMERA() > 5000) || (bVar11)) || (IS_MINIGAME_IN_PROGRESS())) || (sub_8230())) || (NOT (IS_PLAYER_PLAYING( sub_8161() )))) || (NOT bVar7)) || (NOT g_U39102))
            {
                iVar10 = 0;
                iVar9 = 0;
                bVar5 = false;
                bVar11 = false;
                sub_548();
                sub_627();
                g_U11180[0] = 0.00000000;
                g_U11180[1] = 0.00000000;
                if (NOT (l_U272 == nil))
                {
                    WAIT( 0 );
                    RELEASE_TEXTURE( l_U272 );
                }
                l_U271 = nil;
                l_U272 = nil;
            }
            else
            {
                l_U227 = 0.00000000;
                iVar10 = sub_8411();
                iVar9 = sub_8735();
                l_U270 = 0;
                sub_4724( iVar10, iVar9 );
                if ((iVar10 + iVar9) > 0)
                {
                    g_U39103 = 1;
                }
                else
                {
                    bVar5 = false;
                    SETTIMERA( 0 );
                }
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_548()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U234[I]._fU0 = -1;
        l_U234[I]._fU4 = 0;
        l_U234[I]._fU8 = 0;
    }
    return;
}

void sub_627()
{
    int I;

    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        l_U250[I]._fU0 = -1;
        l_U250[I]._fU4 = 0;
        l_U250[I]._fU8 = 0;
    }
    return;
}

int sub_909()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_1004(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))) || (uParam2))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[0] >= 100.00000000) AND (g_U11141[1] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_1774( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_1774(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_1913( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_2567( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_2567( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_1913(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_2567(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

void sub_3156()
{
    int Result;
    boolean bVar3;
    int I;

    Result = 0;
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU20 == -2)
        {
            l_U250[Result]._fU0 = g_U39058[I]._fU16;
            l_U250[Result]._fU4 = g_U39058[I]._fU0;
            l_U250[Result]._fU8 = g_U39058[I]._fU12;
            g_U39058[I]._fU20 = -1;
            Result++;
        }
        else if (l_U269)
        {
            bVar3 = false;
            if ((sub_3326( g_U39058[I]._fU16 )) AND (NOT (IS_CHAR_INJURED( g_U11084[0] ))))
            {
                bVar3 = true;
            }
            if ((sub_4022( g_U39058[I]._fU16 )) AND (NOT (IS_CHAR_INJURED( g_U11084[1] ))))
            {
                bVar3 = true;
            }
            if (bVar3)
            {
                l_U250[Result]._fU0 = g_U39058[I]._fU16;
                l_U250[Result]._fU8 = g_U39058[I]._fU12;
                l_U250[Result]._fU4 = 1;
                g_U39058[I]._fU20 = -1;
                Result++;
            }
        }
    }
    return Result;
}

int sub_3326(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_3337( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

void sub_3337(int iParam0)
{
    int iVar3;
    char[16] Result;
    int iVar8;

    iVar3 = 30;
    StrCopy( ref Result, "RECLOST_", 16 );
    if ((iParam0 < 0) || (iParam0 >= iVar3))
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: NameID out of range" );
        return Result;
    }
    iVar8 = iParam0;
    if (iVar8 >= 40)
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?" );
        return Result;
    }
    if (iVar8 >= 30)
    {
        ConcatString(ref Result, "3", 16);
        iVar8 -= 30;
    }
    if (iVar8 >= 20)
    {
        ConcatString(ref Result, "2", 16);
        iVar8 -= 20;
    }
    if (iVar8 >= 10)
    {
        ConcatString(ref Result, "1", 16);
        iVar8 -= 10;
    }
    switch (iVar8)
    {
        case 0:
        ConcatString(ref Result, "0", 16);
        break;
        case 1:
        ConcatString(ref Result, "1", 16);
        break;
        case 2:
        ConcatString(ref Result, "2", 16);
        break;
        case 3:
        ConcatString(ref Result, "3", 16);
        break;
        case 4:
        ConcatString(ref Result, "4", 16);
        break;
        case 5:
        ConcatString(ref Result, "5", 16);
        break;
        case 6:
        ConcatString(ref Result, "6", 16);
        break;
        case 7:
        ConcatString(ref Result, "7", 16);
        break;
        case 8:
        ConcatString(ref Result, "8", 16);
        break;
        case 9:
        ConcatString(ref Result, "9", 16);
        break;
        default: SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9" );
    }
    return Result;
}

int sub_4022(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_3337( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}

void sub_4221()
{
    int Result;
    int I;

    Result = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (g_U39042[I]._fU0 == -1))
        {
            l_U234[Result]._fU0 = g_U39042[I]._fU0;
            l_U234[Result]._fU4 = g_U39042[I]._fU4;
            l_U234[Result]._fU8 = g_U39042[I]._fU8;
            Result++;
        }
    }
    sub_4355();
    return Result;
}

void sub_4355()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U39042[I]._fU0 = -1;
        g_U39042[I]._fU4 = 0;
        g_U39042[I]._fU8 = 0;
    }
    return;
}

int sub_4456()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    GET_TIME_OF_DAY( ref iVar2, ref iVar3 );
    if ((iVar2 < 6) || (iVar2 >= 20))
    {
        return 0;
    }
    return 1;
}

void sub_4724(int iParam0, int iParam1)
{
    int iVar4;
    int I;

    if (NOT l_U270)
    {
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            return;
        }
    }
    if (IS_SCREEN_FADING())
    {
        return;
    }
    iVar4 = iParam0 + iParam1;
    I = 0;
    if (iVar4 == 0)
    {
        return;
    }
    l_U226 = sub_4796();
    if (l_U270)
    {
        l_U226 += sub_4911();
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    SET_TEXT_DRAW_BEFORE_FADE( 1 );
    sub_4997( iVar4 );
    l_U232 = 0;
    for ( I = 0; I < iParam0; I++ )
    {
        sub_5332( ref l_U250[I] );
        l_U226 += 0.02700000;
        l_U232++;
        if (l_U232 >= 4)
        {
            l_U232 = 0;
        }
    }
    for ( I = 0; I < iParam1; I++ )
    {
        sub_5332( ref l_U234[I] );
        l_U226 += 0.02700000;
        l_U232++;
        if (l_U232 >= 4)
        {
            l_U232 = 0;
        }
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_4796()
{
    if ((GET_IS_HIDEF()) || (sub_4812()))
    {
        return l_U6;
    }
    return l_U7;
}

int sub_4812()
{
    unknown uVar2;
    float fVar3;

    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        GET_HELP_MESSAGE_BOX_SIZE( ref uVar2, ref fVar3 );
        if (fVar3 > 0.00000000)
        {
            return 1;
        }
    }
    return 0;
}

float sub_4911()
{
    unknown uVar2;
    float Result;

    if (sub_4812())
    {
        GET_HELP_MESSAGE_BOX_SIZE( ref uVar2, ref Result );
        Result -= 0.01300000 * 3.00000000;
        return Result;
    }
    return 0.00000000;
}

void sub_4997(unknown uParam0)
{
    float fVar3;
    float fVar4;

    SET_WIDESCREEN_FORMAT( 2 );
    if (NOT l_U233)
    {
        return;
    }
    if (l_U271 == nil)
    {
        l_U271 = GET_TXD( "hud" );
        l_U272 = GET_TEXTURE( l_U271, "grime" );
    }
    fVar3 = (uParam0 * 0.02700000) + 0.01300000;
    fVar4 = 0;
    fVar4 = (sub_4796() - (0.01300000 * 0.76000000)) + (fVar3 / 2.00000000);
    if (l_U270)
    {
        fVar4 += sub_4911();
    }
    DRAW_SPRITE( l_U272, sub_5158() + (sub_5220() / 2), fVar4, sub_5220(), fVar3, 0.00000000, 0, 0, 0, 128 );
    return;
}

void sub_5158()
{
    if (GET_IS_HIDEF())
    {
        return l_U4;
    }
    if (GET_IS_WIDESCREEN())
    {
        return l_U5 - 0.00200000;
    }
    return l_U5;
}

void sub_5220()
{
    if ((GET_IS_HIDEF()) || (GET_IS_WIDESCREEN()))
    {
        return l_U8;
    }
    return l_U9;
}

void sub_5332(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    uVar3 = iParam0->_fU0;
    uVar4 = {sub_3337( uVar3 )};
    sub_5358();
    GET_HUD_COLOUR( 7, ref l_U228, ref l_U229, ref l_U230, ref l_U231 );
    SET_TEXT_COLOUR( l_U228, l_U229, l_U230, l_U231 );
    SET_TEXT_SCALE( 0.20700000, 0.32900000 );
    DISPLAY_TEXT( sub_5544(), l_U226, ref uVar4 );
    fVar8 = l_U227;
    iVar9 = 0;
    fVar10 = 0.00000000;
    fVar11 = 0.00000000;
    if (iParam0->_fU4)
    {
        if (sub_3326( uVar3 ))
        {
            fVar10 = g_U11141[0];
            fVar11 = 100.00000000;
            fVar8 = g_U11180[0];
        }
        else if (sub_4022( uVar3 ))
        {
            fVar10 = g_U11141[1];
            fVar11 = 100.00000000;
            fVar8 = g_U11180[1];
        }
        else
        {
            iVar9 = iParam0->_fU8;
            fVar10 = TO_FLOAT( iVar9 );
            if (fVar10 > 7.00000000)
            {
                fVar10 = 7.00000000;
                fVar8 = 0.00000000;
            }
            fVar11 = 7.00000000;
        }
        sub_5836( sub_5158() + 0.17500000, l_U226, 0.01300000, 0.20300000, 0.00000000, fVar11, fVar10, fVar8, l_U232, 1 );
    }
    else
    {
        fVar12 = (sub_5158() + 0.17500000) - (0.20300000 / 2.00000000);
        if (sub_7522( uVar3 ))
        {
            sub_5358();
            GET_HUD_COLOUR( 4, ref l_U228, ref l_U229, ref l_U230, ref l_U231 );
            SET_TEXT_COLOUR( l_U228, l_U229, l_U230, l_U231 );
            SET_TEXT_SCALE( 0.20700000, 0.32900000 );
            DISPLAY_TEXT( fVar12, l_U226, "RECLOST_BUST" );
        }
        else
        {
            sub_5358();
            GET_HUD_COLOUR( 4, ref l_U228, ref l_U229, ref l_U230, ref l_U231 );
            SET_TEXT_COLOUR( l_U228, l_U229, l_U230, l_U231 );
            SET_TEXT_SCALE( 0.20700000, 0.32900000 );
            DISPLAY_TEXT( fVar12, l_U226, "RECLOST_DEC" );
        }
    }
    return;
}

void sub_5358()
{
    SET_TEXT_DRAW_BEFORE_FADE( 1 );
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( 0.00000000, 1.00000000 );
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_CENTRE( 0 );
    SET_TEXT_RIGHT_JUSTIFY( 0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 128 );
    SET_TEXT_EDGE( 1, 0, 0, 0, 128 );
    SET_TEXT_FONT( 0 );
    return;
}

float sub_5544()
{
    if (GET_IS_HIDEF())
    {
        return 0.07600000;
    }
    return 0.10400000;
}

void sub_5836(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, float fParam5, float fParam6, float fParam7, unknown uParam8, boolean bParam9)
{
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    if ((fParam4 > 0.00000000) AND (fParam5 > 0.00000000))
    {
        if (fParam4 == fParam5)
        {
            fParam4 = 0.00000000;
            fParam5 = 1.00000000;
            fParam6 = 1.00000000;
            fParam7 = 0.00000000;
        }
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    GET_HUD_COLOUR( 2, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    DRAW_RECT( uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3 + (2.00000000 * 0.00150000), uParam2 + (2.00000000 * 0.00150000), uVar16, uVar17, uVar18, 255 );
    GET_HUD_COLOUR( 66, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    DRAW_RECT( uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3, uParam2, uVar16, uVar17, uVar18, uVar19 );
    GET_HUD_COLOUR( 1, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    fVar12 = fParam6 - fParam4;
    fVar12 /= fParam5 - fParam4;
    DRAW_RECT( (uParam0 - (uParam3 * 0.50000000)) + ((fVar12 * uParam3) * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar12 * uParam3, uParam2, uVar16, uVar17, uVar18, uVar19 );
    GET_HUD_COLOUR( 7, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    if (fParam7 > (fParam6 - fParam4))
    {
        fParam7 = fParam6 - fParam4;
    }
    fVar13 = fParam7;
    fVar13 /= fParam5 - fParam4;
    fVar14 = fVar13 * uParam3;
    if (fVar14 > 0.00000000)
    {
        if (fVar14 < (7.50000000 * 0.00010000))
        {
            fVar14 = 7.50000000 * 0.00010000;
        }
    }
    DRAW_RECT( ((uParam0 - (uParam3 * 0.50000000)) + (fVar12 * uParam3)) - ((fVar13 * uParam3) * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar14, uParam2, uVar16, uVar17, uVar18, uVar19 );
    uVar20 = GET_TXD( "hud" );
    uVar21 = GET_TEXTURE( uVar20, "bardirts" );
    if (NOT bParam9)
    {
        switch (uParam8)
        {
            case 0:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3 + (2.00000000 * 0.00150000), uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 1:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, (uParam3 + (2.00000000 * 0.00150000)) * -1.00000000, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 2:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3 + (2.00000000 * 0.00150000), (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
            default:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, (uParam3 + (2.00000000 * 0.00150000)) * -1.00000000, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
        }
    }
    else
    {
        switch (uParam8)
        {
            case 0:
            fVar15 = (uParam3 + (2.00000000 * 0.00150000)) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 1:
            fVar15 = ((uParam3 + (2.00000000 * 0.00150000)) * -1.00000000) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 2:
            fVar15 = (uParam3 + (2.00000000 * 0.00150000)) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
            default:
            fVar15 = ((uParam3 + (2.00000000 * 0.00150000)) * -1.00000000) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
        }
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

int sub_7522(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_3337( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Billy" ))
    {
        return 1;
    }
    return 0;
}

void sub_8107()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8161()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_8230()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_8411()
{
    int Result;
    boolean bVar3;
    int I;

    Result = 0;
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            l_U250[Result]._fU0 = g_U39058[I]._fU16;
            l_U250[Result]._fU4 = g_U39058[I]._fU0;
            l_U250[Result]._fU8 = g_U39058[I]._fU12;
            Result++;
        }
        else if (l_U269)
        {
            bVar3 = false;
            if ((sub_3326( g_U39058[I]._fU16 )) AND (NOT (IS_CHAR_INJURED( g_U11084[0] ))))
            {
                bVar3 = true;
            }
            if ((sub_4022( g_U39058[I]._fU16 )) AND (NOT (IS_CHAR_INJURED( g_U11084[1] ))))
            {
                bVar3 = true;
            }
            if (bVar3)
            {
                l_U250[Result]._fU0 = g_U39058[I]._fU16;
                l_U250[Result]._fU4 = 1;
                l_U250[Result]._fU8 = g_U39058[I]._fU12;
                Result++;
            }
        }
    }
    return Result;
}

void sub_8735()
{
    int iVar2;
    int Result;

    iVar2 = 0;
    Result = 0;
    while (iVar2 < 13)
    {
        if (g_U38937[iVar2]._fU4)
        {
            l_U234[Result]._fU0 = g_U38937[iVar2]._fU16;
            l_U234[Result]._fU4 = g_U38937[iVar2]._fU0;
            l_U234[Result]._fU8 = g_U38937[iVar2]._fU12;
            Result++;
        }
        iVar2++;
    }
    return Result;
}
